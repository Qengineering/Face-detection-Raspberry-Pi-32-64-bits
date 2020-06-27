# Face Detection Raspberry Pi 32/64 bits
![output image]( https://qengineering.eu/images/Walk.jpg )

## Super fast face recognition running at 80 FPS on bare Raspberry Pi 4.
This is a ultra fast C++ implementation of the face detector of Linzaer running on a MNN framework.<br/> 
https://github.com/Linzaer/Ultra-Light-Fast-Generic-Face-Detector-1MB. <br/><br/>
Paper: https://arxiv.org/abs/1905.00641.pdf <br/>
Size: 320x320 <br/><br/>
Special made for a bare Raspberry Pi see https://qengineering.eu/deep-learning-examples-on-raspberry-32-64-os.html <br/>
## Dependencies.
To run the application on a 64 OS, you have to:<br/>
- A raspberry Pi 4 with a 64-bit operating system. It can be the Raspberry 64-bit OS, or Ubuntu 18.04 / 20.04. (https://qengineering.eu/install-raspberry-64-os.html) <br/>
- The Alibaba's MNN framework installed. (https://qengineering.eu/install-mnn-on-raspberry-pi-4.html) <br/>
- OpenCV 64 bit installed. (https://qengineering.eu/install-opencv-4.3-on-raspberry-64-os.html) <br/>
- Code::Blocks installed.<br/>

To run the application on a 32 OS, you need:<br/>
- The Alibaba's MNN framework installed. (https://qengineering.eu/install-mnn-on-raspberry-pi-4.html) <br/>
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
Your *MyDir* folder must now look like this: <br/> 
Face_1.jpg <br/>
Face_2.jpg <br/>
Face_3.jpg <br/>
Face_Mask_Video.mp4 <br/>
MaskUltra.cpb <br/>
mask_ultra.cpp <br/>
UltraFace.cpp <br/>
UltraFace.hpp <br/>
RFB-320.bin <br/>
RFB-320.param <br/>
slim_320.bin <br/>
slim_320.param <br/>
 <br/>
The RFB-320 model recognizes slightly more faces than slim_320 at the expense of a little bit of speed. It is up to you.<br/>
See the video at https://youtu.be/LDPXgJv3wAk
