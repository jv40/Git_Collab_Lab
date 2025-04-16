#include "geometry.h"
using namespace std;
#include <iostream>

float areaOfCircle(float radius) {
    //cout<<"Area of Circle: "<<radius<<endl;
    return 3.14*radius*radius;


}
float areaOfRectangle(float width, float height) {
 //   cout<<"Area of Rectangle: "<<width<<" "<<height<<endl;
    return width*height;
}

float volumeOfBox(float I, float width, float height) {
   // cout<<"Volume of Box: "<<width<<" "<<height<<endl;
    return I*width*height;
}