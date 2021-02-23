# Face Detection on Raspberry Pi 32/64 bits
![output image]( https://qengineering.eu/images/Walk.jpg )

## Super fast face detection up to 80 FPS on a bare Raspberry Pi 4.
This is a ultra fast C++ implementation of the face detector of Linzaer running on a MNN framework.<br/> 
https://github.com/Linzaer/Ultra-Light-Fast-Generic-Face-Detector-1MB. <br/><br/>
Paper: https://arxiv.org/abs/1905.00641.pdf <br/>
Size: 320x320 <br/><br/>
Special made for a bare Raspberry Pi see https://qengineering.eu/deep-learning-examples-on-raspberry-32-64-os.html <br/>
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
### Thanks.
https://github.com/Linzaer/Ultra-Light-Fast-Generic-Face-Detector-1MB<br/>

