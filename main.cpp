#include <iostream>
#include "test.h"
#include "cat.h"
#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"

using namespace std;
using namespace cv;

int main()
{
    SayHello();

    Cat myCat;

    myCat.setAge(31);

    cout << "Age of my Cat: " << myCat.getAge() << endl;

    Mat image = imread("/Users/junior/WorkSpace/xcode.opencv.core/happy.jpg");

    if(!image.data){
        cout <<  "Could not open or find the image" << endl ;
        return -1;
    }

    namedWindow("hola", WINDOW_AUTOSIZE);
    imshow("hola", image);

    waitKey(0);

    return 0;
}
