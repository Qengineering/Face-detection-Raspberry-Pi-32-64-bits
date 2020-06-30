#include "ncnn_UltraFace.hpp"
#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;

int main(int argc, char **argv) {
    float f;
    float FPS[16];
    int i, Fcnt=0;
    cv::Mat frame;
    //some timing
    chrono::steady_clock::time_point Tbegin, Tend;

    for(i=0;i<16;i++) FPS[i]=0.0;

    UltraFace ultraface("RFB-320.bin", "RFB-320.param", 320, 240, 4, 0.65); // config model input

    cv::VideoCapture cap("Walks2.mp4");
    if (!cap.isOpened()) {
        cerr << "ERROR: Unable to open the camera" << endl;
        return 0;
    }
    cout << "Start grabbing, press ESC on Live window to terminate" << endl;

    while(1){
//        frame=cv::imread("27.jpg");  //if you want to run just one picture need to refresh frame before class detection
        cap >> frame;
        if (frame.empty()) {
            cerr << "ERROR: Unable to grab from the camera" << endl;
            break;
        }

        ncnn::Mat inmat = ncnn::Mat::from_pixels(frame.data, ncnn::Mat::PIXEL_BGR2RGB, frame.cols, frame.rows);

        Tbegin = chrono::steady_clock::now();

        vector<FaceInfo> face_info;
        ultraface.detect(inmat, face_info);

        Tend = chrono::steady_clock::now();

        for (auto face : face_info) {
            cv::Point pt1(face.x1, face.y1);
            cv::Point pt2(face.x2, face.y2);
            cv::rectangle(frame, pt1, pt2, cv::Scalar(0, 255, 0), 2);
        }

        //calculate frame rate
        f = chrono::duration_cast <chrono::milliseconds> (Tend - Tbegin).count();
        if(f>0.0) FPS[((Fcnt++)&0x0F)]=1000.0/f;
        for(f=0.0, i=0;i<16;i++){ f+=FPS[i]; }
        cv::putText(frame, cv::format("FPS %0.2f", f/16),cv::Point(10,20),cv::FONT_HERSHEY_SIMPLEX,0.6, cv::Scalar(0, 0, 255));

//        cv::imwrite("27Result.jpg",frame); //in case you run only a jpg picture

        //show output
        cv::imshow("RPi 64 OS - 1,95 GHz - 2 Mb RAM", frame);
        char esc = cv::waitKey(5);
        if(esc == 27) break;
    }
    cv::destroyAllWindows();
    return 0;
}
