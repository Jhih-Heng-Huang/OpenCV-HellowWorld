#include <stdio.h>
#include <cstdlib>
#include <opencv2/opencv.hpp>

using namespace cv;

int main(int argc, char const *argv[])
{
    if ( argc != 3 )
    {
        printf("usage: OutputBinaryImage.out <Image_Path> <threshold_value>\n");
        return -1;
    }

    Mat img = imread(argv[1], IMREAD_GRAYSCALE);
    if ( !img.data )
    {
        printf("No image data \n");
        return -1;
    }
    Mat dst;
    double thresholdValue = atof(argv[2]);
    double maxValue = 255;
    threshold(img, dst, thresholdValue, maxValue, THRESH_BINARY);
    imwrite("output.jpg", dst);
    return 0;
}