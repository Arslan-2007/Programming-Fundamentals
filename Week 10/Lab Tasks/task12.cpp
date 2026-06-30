#include<iostream>
using namespace std;
void calculatePoolState(float v,float p1,float p2,float h){
    int water=(p1+p2)*h;
    if(water <= v){
        float pool=(water/v)*100;
        float pipe1=((p1*h)/water)*100;
        float pipe2=((p2*h)/water)*100;
        cout<<"The pool is "<<pool<<"% full."<<endl;
        cout<<"Pipe 1: "<<pipe1<<"%. Pipe 2:"<<pipe2<<"5";
    }
    if(water>v){
        float overflow=water-v;
        cout<<"For "<<h<<" hours, the pool overflows with "<<overflow<<" liters.";
    }
}
int main(){
    cout<<"Enter the volume of the pool in liters:";
    float v;
    cin>>v;
    cout<<"Enter the flow rate of the 1st pipe per hour:";
    float p1;
    cin>>p1;
    cout<<"Enter the flow rate of the 2nd pipe per houe:";
    float p2;
    cin>>p2;
    cout<<"Enter the hours that is the worker is absent:";
    float h;
    cin>>h;
    calculatePoolState(v,p1,p2,h);
}