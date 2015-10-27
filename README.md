# Caffe_demo
A Caffe Windows program for demonstration purpose only.

Build platform: Windows X86. Visual Studio 2015.

Directory struture:

Caffe_demo
├── 3rdparty
│   ├── include
│   │    ├── boost
│   │    ├── gflags
│   │    ├── glog
│   │    ├── google
│   │    ├── OpenBLAS
│   │    │   └── include
│   │    ├── opencv
│   │    └── opencv2
│   └── lib
│        ├── gflags.lib                   built by VS2015
│        ├── gflags_nothreads.lib        built by VS2015
│        ├── libboost_chrono-vc140-mt-1_57.lib
│        ├── libboost_date_time-vc140-mt-1_57.lib
│        ├── libboost_system-vc140-mt-1_57.lib
│        ├── libboost_thread-vc140-mt-1_57.lib
│        ├── libglog.lib
│        ├── libopenblas.dll.a            come from official "OpenBLAS-v0.2.14-Win32.zip"
│        ├── libprotobuf.lib              built by VS2015
│        ├── opencv_core2410.lib         come from official "opencv-2.4.10.exe"
│        ├── opencv_highgui2410.lib      come from official "opencv-2.4.10.exe"
│        └── opencv_imgproc2410.lib      come from official "opencv-2.4.10.exe"
├── caffe
│   ├── include
│   ├── python
│   └── src
├── Caffe_demo
│   ├── Caffe_demo.vcxproj
│   ├── Caffe_demo.vcxproj.filters
│   ├── caffe_test.cpp
│   ├── libglog.dll                   built by VS2015
│   ├── libopenblas.dll               come from official "OpenBLAS-v0.2.14-Win32.zip"
│   ├── libprotobuf.dll               built by VS2015
│   ├── opencv_core2410.dll          come from official "opencv-2.4.10.exe"
│   ├── opencv_highgui2410.dll       come from official "opencv-2.4.10.exe"
│   └── opencv_imgproc2410.dll       come from official "opencv-2.4.10.exe"
└── Caffe_demo.sln

3rd-party dependencies:

# glog-0.3.4

[https://github.com/google/glog](https://github.com/google/glog)

# gflags-2.1.2

[https://github.com/gflags/gflags](https://github.com/gflags/gflags)

# openblas-0.2.14

[http://sourceforge.net/projects/openblas/files/](http://sourceforge.net/projects/openblas/files/)

# opencv-2.4.10

[opencv.org/downloads.html](opencv.org/downloads.html)