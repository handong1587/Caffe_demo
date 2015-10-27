protoc caffe.proto --cpp_out=./
protoc caffe.proto --python_out=./
md ..\..\..\include\caffe\proto\
copy /y .\caffe.pb.h ..\..\..\include\caffe\proto\
md ..\..\..\python\caffe\proto\
copy /y .\caffe_pb2.py ..\..\..\python\caffe\proto\
copy nul ..\..\..\python\caffe\proto\__init__.py
pause