# Super fast face detection at 80 FPS on bare Raspberry Pi 4.
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
Your *MyDir/MNN* folder must now look like this: <br/> 
Walk2.mp4 (demo video)<br/>
FaceDetection.cpb (code::blocks project file)<br/>
main.cpp (main example file)<br/>
MNN_UltraFace.cpp (Ultra face class)<br/>
MNN_UltraFace.hpp (Ultra face class)<br/>
RFB-320.mnn (fp32)<br/>
RFB-320-quant-ADMM-32.mnn (int8 ADMM quantified)<br/>
RFB-320-quant-KL-5792.mnn (int8 KL quantified)<br/>
slim_320.mnn (fp32)<br/>
slim_320-quant-ADMM-50.mnn (int8 ADMM quantified)<br/>
 <br/>
The RFB-320 model recognizes slightly more faces than slim_320 at the expense of a little bit of speed. The quantified models are a lot faster. Choose the one you like.<br/>
See the video at https://youtu.be/DERA83C9K2A
