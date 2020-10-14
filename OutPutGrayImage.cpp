#include <stdio.h>
#include <opencv2/opencv.hpp>

using namespace cv;

int main(int argc, char const *argv[])
{
    if ( argc != 2 )
    {
        printf("usage: OutputGrayImage.out <Image_Path>\n");
        return -1;
    }

    Mat img = imread(argv[1], IMREAD_GRAYSCALE);
    if ( !img.data )
    {
        printf("No image data \n");
        return -1;
    }
    imwrite("output.jpg", img);
    return 0;
}
