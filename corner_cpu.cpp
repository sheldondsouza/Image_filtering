#include <iostream>
#include <opencv2/opencv.hpp>
using namespace std;
using namespace cv;

VideoCapture cap(0);
RNG rng(12345);

int main() {
    if (!cap.isOpened()) {
        cerr << "Cannot open camera!" << endl;
        return -1;
    }

    Mat img, gray, corners;
    while (true) {
        double start = getTickCount();

        cap.read(img);
        if (img.empty()) break;

        cvtColor(img, gray, COLOR_BGR2GRAY);

        goodFeaturesToTrack(gray, corners, 100, 0.01, 10, Mat(), 3, false, 0.04);

        double end = getTickCount();
        double fps = getTickFrequency() / (end - start);

        for (int i = 0; i < corners.rows; i++) {
            int b = rng.uniform(0,255);
            int g = rng.uniform(0,255);
            int r = rng.uniform(0,255);
            Point2f point = corners.at<Point2f>(i, 0);
            circle(img, point, 6, Scalar(b,g,r), 2, 8);
        }

        putText(img, "FPS: " + to_string(int(fps)), Point(50, 50),
                FONT_HERSHEY_DUPLEX, 1, Scalar(255,255,255), 2);

        imshow("Image", img);
        if (waitKey(1) == 'q') break;
    }

    cap.release();
    destroyAllWindows();
    return 0;
}
