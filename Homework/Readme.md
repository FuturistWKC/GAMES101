# Linux安装Eigen 3
## 下载
[下载地址](https://gitlab.com/libeigen/eigen/-/tree/master)  
git clone 下载到本地
## 安装
打开下载路径
```
mkdir build
cd build
cmake ..
sudo make install
```
安装后文件路径 usr/local/include/eigen3
## 测试
`vim eigentest.cpp`
```
#include <iostream>
#include <eigen3/Eigen/Dense>
using Eigen::MatrixXd;

int main()
{
	MatrixXd m(2,2);
	m(0,0) = 3;
	m(1,0) = 2.5;
	m(0,1) = -1;
	m(1,1) = m(1,0) + m(0,1);
	std::cout << m << std::endl;
}
```
运行

`g++ *.cpp -o app`  
`./app` 
 
输出：
```
3   -1
2.5 1.5
```
## 查看版本号
`vim /usr/local/include/eigen3/Eigen/src/Core/util/Macros.h`
```
#define EIGEN_WORLD_VERSION 3
#define EIGEN_MAJOR_VERSION 4
#define EIGEN_MINOR_VERSION 90
```
版本为3.4.90  
  
`pkg-config --modversion eigen3`  
可查看版本号，需安装pkg-config
## 卸载
`apt-get install mlocate`  
安装mlocate  
`sudo updatedb`  
`locate eigen3`  
查看eigen3位置  
`sudo rm -rf eigen3路径`  
删除相关文件  
# Linux下安装OpenCV
## 安装
[OpenCV Get Started](https://opencv.org/get-started/)  
**Operating System:**  
Linux  
**Building From Source:**  
Yes  
**Language:**  
C++  
[OpenCV安装参考](https://docs.opencv.org/4.8.0/d7/d9f/tutorial_linux_install.html)  
最后不要忘记`sudo make install`
## 查看版本号
`opencv_version`
> terminate called after throwing an instance of 'cv::Exception'
  what():  OpenCV(4.8.0) /home/darwinvinci/Downloads/opencv-4.8.0/modules/highgui/src/window.cpp:1255: error: (-2:Unspecified error) The function is not implemented. Rebuild the library with Windows, GTK+ 2.x or Cocoa support. If you are on Ubuntu or Debian, install libgtk2.0-dev and pkg-config, then re-run cmake or configure script in function 'cvNamedWindow'

