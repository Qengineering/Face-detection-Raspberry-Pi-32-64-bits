![output image](https://qengineering.eu/images/SDcard16GB_tiny.jpg) Find this example on our [SD-image](https://github.com/Qengineering/RPi-image)
# Face Detection on Raspberry Pi 32/64 bits
![output image]( https://qengineering.eu/images/Walk.jpg )

## Super fast face detection up to 80 FPS on a bare Raspberry Pi 4.
This is a ultra fast C++ implementation of the face detector of Linzaer running on a MNN framework.<br/> 
https://github.com/Linzaer/Ultra-Light-Fast-Generic-Face-Detector-1MB. <br/><br/>
Paper: https://arxiv.org/abs/1905.00641.pdf <br/>
Size: 320x320 <br/><br/>
Special made for a bare Raspberry Pi see https://qengineering.eu/deep-learning-examples-on-raspberry-32-64-os.html <br/>

------------

## Frameworks.
Three frameworks are supported:<br/>
- Alibaba's MNN framework <br/>
- Tencent ncnn framework <br/>
- OpenCV dnn <br/>
![output image]( https://qengineering.eu/images/UltraFaceCompare.png ) <br/>
The frame rate is based upon the average execution time of the single frames. <br/>
Loading frames from a file, plotting boxes, and showing the result on the screen are not taken into account. <br/><br/>
The MNN framework has also 8 bit quantized models. These are very fast. <br/><br/>
![output image]( https://qengineering.eu/images/UltraFaceMNNCompare.png ) <br/><br/>
See the video at https://youtu.be/DERA83C9K2A

------------

### Thanks.
https://github.com/Linzaer/Ultra-Light-Fast-Generic-Face-Detector-1MB<br/>

------------

## Benchmark.
| Model  | framework | model |size |  mAP | Jetson Nano<br/>2015 MHz | RPi 4 64-OS<br/>1950 MHz |
| ------------- | :-----: | :-----:  | :-----:  | :-----:  | :-------------:  | :-------------: |
| Ultra-Light-Fast| ncnn | slim-320 | 320x240 | 67.1  |    - FPS | 26 FPS |
| Ultra-Light-Fast| ncnn | RFB-320 | 320x240 | 69.8  |    - FPS | 23 FPS |
| Ultra-Light-Fast| MNN | slim-320 | 320x240 | 67.1  | 70 FPS | 65 FPS |
| Ultra-Light-Fast| MNN | RFB-320 | 320x240 | 69.8  | 60 FPS | 56 FPS |
| Ultra-Light-Fast| OpenCV | slim-320 | 320x240 | 67.1  | 48 FPS | 40 FPS |
| Ultra-Light-Fast| OpenCV | RFB-320 | 320x240 | 69.8  | 43 FPS | 35 FPS |
| Ultra-Light-Fast + Landmarks| ncnn | slim-320 | 320x240 | 67.1  | 50 FPS | 24 FPS |
| LFFD| ncnn | 5 stage | 320x240 | 88.6 | 16.4 FPS | 4.85 FPS |
| LFFD| ncnn | 8 stage | 320x240 | 88.6 | 11.7 FPS | 3.45 FPS |
| LFFD| MNN | 5 stage | 320x240 | 88.6 | 2.6 FPS | 2.17 FPS |
| LFFD| MNN | 8 stage | 320x240 | 88.6 | 1.8 FPS | 1.49 FPS |

------------

### RFB-320 <br/>
![output image](https://qengineering.eu/images/ResultSelfie-RFB.jpg) 
### slim_320<br/>
![output image](https://qengineering.eu/images/ResultSelfie-slim.jpg) 
### LFFD-5 <br/>
![output image]( https://qengineering.eu/images/selfie_result_5.jpg )
### LFFD-8 <br/>
![output image]( https://qengineering.eu/images/selfie_result_8.jpg )



