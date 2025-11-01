# ⚡ Image Filtering: Corner Detection (CPU & GPU)

<div align="center">

[![GitHub stars](https://img.shields.io/github/stars/sheldondsouza/Image_filtering?style=for-the-badge)](https://github.com/sheldondsouza/Image_filtering/stargazers)
[![GitHub forks](https://img.shields.io/github/forks/sheldondsouza/Image_filtering?style=for-the-badge)](https://github.com/sheldondsouza/Image_filtering/network)
[![GitHub issues](https://img.shields.io/github/issues/sheldondsouza/Image_filtering?style=for-the-badge)](https://github.com/sheldondsouza/Image_filtering/issues)
[![GitHub license](https://img.shields.io/github/license/sheldondsouza/Image_filtering?style=for-the-badge)](LICENSE) <!-- TODO: Add a LICENSE file -->

**High-performance Harris Corner Detection for images, with optimized CPU and GPU implementations using OpenCV.**

</div>

## 📖 Overview

This repository provides two standalone C++ applications for performing Harris Corner Detection on images. It features both a traditional CPU-based implementation leveraging standard OpenCV functions and a highly optimized GPU-accelerated version utilizing OpenCV's CUDA modules.

Corner detection is a fundamental task in computer vision, used in various applications like object recognition, image stitching, tracking, and 3D reconstruction. This project demonstrates how to implement and compare the performance of these essential image processing algorithms across different hardware architectures, offering a practical example for those interested in computer vision and GPU computing.

## ✨ Features

-   **Harris Corner Detection**: Robust detection of corners in images.
-   **CPU-Optimized Implementation**: Efficient corner detection utilizing standard CPU processing with OpenCV.
-   **GPU-Accelerated Implementation**: Leverage NVIDIA CUDA for significantly faster corner detection on compatible GPUs.
-   **Image Input/Output**: Reads standard image formats and displays results visually with detected corners highlighted.
-   **Performance Comparison**: Provides a foundation for comparing the speed and efficiency of CPU vs. GPU processing for image tasks.

## 🖥️ Screenshots

<!-- TODO: Add actual screenshots of the application running, showing detected corners for both CPU and GPU versions. -->

![CPU Corner Detection](path-to-cpu-screenshot.png)
_Example: Corners detected using the CPU implementation._

![GPU Corner Detection](path-to-gpu-screenshot.png)
_Example: Corners detected using the GPU-accelerated implementation._

## 🛠️ Tech Stack

**Core Language:**
![C++](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)

**Libraries:**
![OpenCV](https://img.shields.io/badge/OpenCV-5C3EE8?style=for-the-badge&logo=opencv&logoColor=white)

**GPU Acceleration (for `corner_gpu`):**
![NVIDIA CUDA](https://img.shields.io/badge/CUDA-76B900?style=for-the-badge&logo=nvidia&logoColor=white)

## 🚀 Quick Start

### Prerequisites

To build and run these applications, you need the following installed on your system:

-   **C++ Compiler**: `g++` (GNU C++ Compiler) or equivalent.
-   **OpenCV Library**: Version 3.x or 4.x. Make sure `pkg-config` is set up to find your OpenCV installation.
-   **NVIDIA CUDA Toolkit**: Required **only for the GPU version (`corner_gpu.cpp`)**. This includes `nvcc` (NVIDIA CUDA Compiler).

### Installation

1.  **Clone the repository**
    ```bash
    git clone https://github.com/sheldondsouza/Image_filtering.git
    cd Image_filtering
    ```

### Building the Executables

#### Build CPU Version

To compile the CPU-based corner detection application:

```bash
g++ corner_cpu.cpp -o corner_cpu $(pkg-config opencv --cflags --libs)
```

#### Build GPU Version

To compile the GPU-accelerated corner detection application:

```bash
# Ensure your CUDA environment variables are set up correctly
# e.g., PATH includes CUDA bin, LD_LIBRARY_PATH includes CUDA lib64

nvcc corner_gpu.cpp -o corner_gpu $(pkg-config opencv --cflags --libs)
```

**Note**: If you encounter issues with `pkg-config`, you might need to manually specify OpenCV include and library paths (e.g., `-I/usr/local/include/opencv4 -L/usr/local/lib -lopencv_core -lopencv_imgproc -lopencv_highgui -lopencv_imgcodecs -lopencv_cudaimgproc`). For CUDA, ensure `nvcc` is in your PATH and libraries like `cudart` are linked, which `nvcc` usually handles automatically.

### Usage

Once built, you can run the executables by providing an image path as a command-line argument.

#### Run CPU Version

```bash
./corner_cpu <path_to_your_image.jpg>
```
_Example:_
```bash
./corner_cpu sample_image.jpg
```

#### Run GPU Version

```bash
./corner_gpu <path_to_your_image.jpg>
```
_Example:_
```bash
./corner_gpu another_image.png
```

The application will open two windows: one displaying the original image and another showing the image with detected corners highlighted (red for CPU, green for GPU). Press any key to close the windows.

## 📁 Project Structure

```
Image_filtering/
├── README.md         # This README file
├── corner_cpu.cpp    # Source code for CPU-based Harris Corner Detection
└── corner_gpu.cpp    # Source code for GPU-accelerated Harris Corner Detection
```

## ⚙️ Configuration

The applications currently accept one command-line argument: the path to the input image. There are no external configuration files or environment variables used beyond standard library paths.

### Command-line Arguments

| Argument | Description       | Required | Example             |
| :------- | :---------------- | :------- | :------------------ |
| `image_path` | Path to the input image file | Yes      | `sample_image.jpg` |

## 🤝 Contributing

We welcome contributions to improve this project! Please feel free to open issues for bug reports or feature requests, or submit pull requests with improvements.

### Development Setup for Contributors

1.  **Clone the repository**.
2.  Ensure all **Prerequisites** are installed.
3.  Compile and test changes using the provided build commands.

## 📄 License

This project is licensed under the [LICENSE_NAME](LICENSE) - see the LICENSE file for details. <!-- TODO: Add a LICENSE file (e.g., MIT, Apache 2.0) -->

## 🙏 Acknowledgments

-   **OpenCV**: For its powerful computer vision library and support for both CPU and CUDA-accelerated image processing.
-   **NVIDIA CUDA**: For enabling high-performance GPU computing.

## 📞 Support & Contact

-   🐛 Issues: [GitHub Issues](https://github.com/sheldondsouza/Image_filtering/issues)

---

<div align="center">

**⭐ Star this repo if you find it helpful!**

Made with ❤️ by [sheldondsouza](https://github.com/sheldondsouza)

</div>
```
