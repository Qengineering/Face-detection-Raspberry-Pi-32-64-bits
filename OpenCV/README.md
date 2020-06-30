# Fast face recognition running at 30 FPS on bare Raspberry Pi 4.
This is a fast C++ implementation of the face detector of Linzaer running on an OpenCV framework.<br/> 
https://github.com/Linzaer/Ultra-Light-Fast-Generic-Face-Detector-1MB. <br/><br/>
Paper: https://arxiv.org/abs/1905.00641.pdf <br/>
Size: 320x320 <br/><br/>
Special made for a bare Raspberry Pi see https://qengineering.eu/deep-learning-examples-on-raspberry-32-64-os.html <br/>
To run this app, you don't have to install a special deep learning framework, as OpenCV can run ONNX model.<br/>
## Dependencies.
To run the application on a 64 OS, you have to:<br/>
- A raspberry Pi 4 with a 64-bit operating system. It can be the Raspberry 64-bit OS, or Ubuntu 18.04 / 20.04. (https://qengineering.eu/install-raspberry-64-os.html) <br/>
- OpenCV 64 bit installed. (https://qengineering.eu/install-opencv-4.3-on-raspberry-64-os.html) <br/>
- Code::Blocks installed.<br/>

To run the application on a 32 OS, you need:<br/>
- OpenCV 32 bit installed. (https://qengineering.eu/install-opencv-4.3-on-raspberry-pi-4.html) <br/>
- Code::Blocks installed.
## Running the app.
To extract and run the network in Code::Blocks <br/>
$ mkdir *MyDir* <br/>
$ cd *MyDir* <br/>
$ wget https://github.com/Qengineering/Face-detection-Raspberry-Pi-32-64-bits/archive/master.zip <br/>
$ unzip -j master.zip <br/>
Remove master.zip and README.md as they are no longer needed. <br/> 
$ rm master.zip <br/>
$ rm README.md <br/> <br/>
Your *MyDir/OpenCV* folder must now look like this: <br/> 
Walk2.mp4 (demo video)<br/>
FaceDetection.cpb (code::blocks project file)<br/>
main.cpp (main example file)<br/>
cv_dnn_ultraface.cpp (Ultra face class)<br/>
cv_dnn_ultraface.h (Ultra face class)<br/>
version-RFB-320_simplified.onnx (onnx model)<br/>
version-RFB-320_without_postprocessing.onnx (onnx model)<br/>
version-slim-320_simplified.onnx (onnx model)<br/>
version-slim-320_without_postprocessing.onnx (onnx model)<br/>
 <br/>
The RFB-320 model recognizes slightly more faces than slim_320 at the expense of a little bit of speed. Choose the one you like.<br/>
See the video at https://youtu.be/DERA83C9K2A
