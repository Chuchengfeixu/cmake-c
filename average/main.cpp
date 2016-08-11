#include <iostream>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace std;
using namespace cv;

int main()
{
    float n1,n2,n3;
    float R;
    cout <<"Please input 3 numbers:"<< endl;
    cin >>n1>>n2>>n3;
    R=(n1+n2+n3)/3;
    cout <<"Average is"<< R << endl;


    return 0;
}

