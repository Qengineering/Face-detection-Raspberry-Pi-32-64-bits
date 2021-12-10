![output image](https://qengineering.eu/images/SDcard16GB_tiny.jpg) Find this example on our [SD-image](https://github.com/Qengineering/RPi-image)
# Super fast face detection at 80 FPS on bare Raspberry Pi 4.

------------

## Benchmark.
| Model  | framework | model |size |  mAP | Jetson Nano<br/>2015 MHz | RPi 4 64-OS<br/>1950 MHz |
| ------------- | :-----: | :-----:  | :-----:  | :-----:  | :-------------:  | :-------------: |
| Ultra-Light-Fast| ncnn | slim-320 | 320x240 | 67.1  |    - FPS | 26 FPS |
| Ultra-Light-Fast| ncnn | RFB-320 | 320x240 | 69.8  |    - FPS | 23 FPS |
| Ultra-Light-Fast| MNN | slim-320 | 320x240 | 67.1  | 70 FPS | **65 FPS** |
| Ultra-Light-Fast| MNN | RFB-320 | 320x240 | 69.8  | 60 FPS | **56 FPS** |
| Ultra-Light-Fast| OpenCV | slim-320 | 320x240 | 67.1  | 48 FPS | 40 FPS |
| Ultra-Light-Fast| OpenCV | RFB-320 | 320x240 | 69.8  | 43 FPS | 35 FPS |
| Ultra-Light-Fast + Landmarks| ncnn | slim-320 | 320x240 | 67.1  | 50 FPS | 24 FPS |
| LFFD| ncnn | 5 stage | 320x240 | 88.6 | 16.4 FPS | 4.85 FPS |
| LFFD| ncnn | 8 stage | 320x240 | 88.6 | 11.7 FPS | 3.45 FPS |
| LFFD| MNN | 5 stage | 320x240 | 88.6 | 2.6 FPS | 2.17 FPS |
| LFFD| MNN | 8 stage | 320x240 | 88.6 | 1.8 FPS | 1.49 FPS |
| CenterFace| ncnn | - | 320x240 | 93 | 16.5 FPS | 6.8 FPS |

------------

## Dependencies 32-bit OS.
To run the application, you have to:
- The Alibaba's MNN framework installed. (https://qengineering.eu/install-mnn-on-raspberry-pi-4.html) <br/>
- OpenCV 32 bit installed. [Install OpenCV 4.5](https://qengineering.eu/install-opencv-4.5-on-raspberry-pi-4.html) <br/>
- Code::Blocks installed. (```$ sudo apt-get install codeblocks```)<br/>

## Dependencies 64-bit OS.
To run the application on a 64 OS, you have to:<br/>
- A raspberry Pi 4 with a 64-bit operating system. It can be the Raspberry 64-bit OS, or Ubuntu 18.04 / 20.04. (https://qengineering.eu/install-raspberry-64-os.html) <br/>
- The Alibaba's MNN framework installed. (https://qengineering.eu/install-mnn-on-raspberry-pi-4.html) <br/>
- OpenCV 64 bit installed. (https://qengineering.eu/install-opencv-4.3-on-raspberry-64-os.html) <br/>
- Code::Blocks installed. (```$ sudo apt-get install codeblocks```) <br/>

------------

## Running the app.
To extract and run the network in Code::Blocks <br/>
$ mkdir *MyDir* <br/>
$ cd *MyDir* <br/>
$ wget https://github.com/Qengineering/Face-detection-Raspberry-Pi-32-64-bits/archive/refs/heads/master.zip <br/>
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

### RFB-320<br/>
![output image](https://qengineering.eu/images/ResultSelfie-RFB.jpg) 
### RFB-320-quant-ADMM-32 (int8 ADMM quantified)<br/>
![output image](https://qengineering.eu/images/ResultSelfie-RFB-quant-ADMM-32.jpg) 
### RFB-320-quant-KL-5792 (int8 KL quantified)<br/>
![output image](https://qengineering.eu/images/ResultSelfie-RFB-quant-KL-5792.jpg) 
### slim_320<br/>
![output image](https://qengineering.eu/images/ResultSelfie-slim.jpg) 
### slim_320-quant-ADMM-50 (int8 ADMM quantified)<br/>
![output image](https://qengineering.eu/images/ResultSelfie-slim-quant-ADMM.jpg) 

------------

[![paypal](https://qengineering.eu/images/TipJarSmall4.png)](https://www.paypal.com/cgi-bin/webscr?cmd=_s-xclick&hosted_button_id=CPZTM5BB3FCYL) 

