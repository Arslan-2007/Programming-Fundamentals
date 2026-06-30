#include<iostream>
#include<cmath>
using namespace std;
float pyramidVolume(float length,float width,float height){
    return (1.0/3.0)*length*width*height;
}
int main(){
    cout<<"Enter the length of pyramid(in meters):";
    float length;
    cin>>length;
    cout<<"Enter the width of pyramid(in meters):";
    float width;
    cin>>width;
    cout<<"Enter the height of pyramid(in meteres):";
    float height;
    cin>>height;
    cout<<"Enter the output unit (mm,cm,m,km):";
    string unit;
    cin>>unit;
    float volume=pyramidVolume(length,width,height);
    if(unit=="mm"){
        cout<<"Volume of pyramid is:"<<volume*1000000000.0<<" cubic millimeters";
    }
    else if(unit=="cm"){
        cout<<"Volume of pyramid is: "<<volume*1000000.0<<" cubic centimeters.";
    }
    else if(unit=="km"){
        float pw=pow(10,-9);
        cout<<"Volume of pyramid is: "<<volume*pw<<" cubic kilometers.";
    }
    else if(unit=="m"){
        cout<<"Volume of pyramid is: "<<volume<<" cubic meters.";
    }
    return 0;
}