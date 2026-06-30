#include<iostream>
#include<cmath>
using namespace std;
float height(float num1,float num2){
    float radin=num2/57.2958;
    float hei=num1*tan(radin);
    return hei;
}
int main(){
    cout<<"Enter the distance from the base of the tree (in feet):";
    float distance;
    cin>>distance;
    cout<<"Enter the angle of elevation(in degrees):";
    float angle;
    cin>>angle;
    float heightOftree=height(distance,angle);
    cout<<"The height of the tree is: "<<heightOftree;
}