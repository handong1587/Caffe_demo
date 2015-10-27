# Caffe_demo

A Caffe Windows program for demonstration purpose only.

Build platform: Windows X86. Visual Studio 2015, Release Mode.

Directory structure:

Caffe_demo  <br />
├── 3rdparty  <br />
│   ├── include  <br />
│   │    ├── boost  <br />
│   │    ├── gflags  <br />
│   │    ├── glog  <br />
│   │    ├── google  <br />
│   │    ├── OpenBLAS  <br />
│   │    │   └── include  <br />
│   │    ├── opencv  <br />
│   │    └── opencv2  <br />
│   └── lib  <br />
│        ├── gflags.lib                   (built by VS2015)  <br />
│        ├── gflags_nothreads.lib         (built by VS2015)  <br />
│        ├── libboost_chrono-vc140-mt-1_57.lib  <br />
│        ├── libboost_date_time-vc140-mt-1_57.lib  <br />
│        ├── libboost_system-vc140-mt-1_57.lib  <br />
│        ├── libboost_thread-vc140-mt-1_57.lib  <br />
│        ├── libglog.lib  <br />
│        ├── libopenblas.dll.a            (come from official "OpenBLAS-v0.2.14-Win32.zip")  <br />
│        ├── libprotobuf.lib              (built by VS2015)  <br />
│        ├── opencv_core2410.lib          (come from official "opencv-2.4.10.exe")  <br />
│        ├── opencv_highgui2410.lib       (come from official "opencv-2.4.10.exe")  <br />
│        └── opencv_imgproc2410.lib       (come from official "opencv-2.4.10.exe")  <br />
├── caffe  <br />
│   ├── include  <br />
│   ├── python  <br />
│   └── src  <br />
├── Caffe_demo  <br />
│   ├── Caffe_demo.vcxproj  <br />
│   ├── Caffe_demo.vcxproj.filters  <br />
│   ├── caffe_test.cpp  <br />
│   ├── libglog.dll                       (built by VS2015)  <br />
│   ├── libopenblas.dll                   (come from official "OpenBLAS-v0.2.14-Win32.zip")  <br />
│   ├── libprotobuf.dll                   (built by VS2015)  <br />
│   ├── opencv_core2410.dll               (come from official "opencv-2.4.10.exe")  <br />
│   ├── opencv_highgui2410.dll            (come from official "opencv-2.4.10.exe")  <br />
│   └── opencv_imgproc2410.dll            (come from official "opencv-2.4.10.exe")  <br />
└── Caffe_demo.sln  <br />

3rd-party dependencies:

# glog-0.3.4

[https://github.com/google/glog](https://github.com/google/glog)

# gflags-2.1.2

[https://github.com/gflags/gflags](https://github.com/gflags/gflags)

# openblas-0.2.14

[http://sourceforge.net/projects/openblas/files/](http://sourceforge.net/projects/openblas/files/)

# opencv-2.4.10

[opencv.org/downloads.html](opencv.org/downloads.html)