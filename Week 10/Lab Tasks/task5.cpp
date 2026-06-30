#include<iostream>
#include<cmath>
using namespace std;
float disc(float a1,float b1,float c1){
    float d=(b1*b1)-4*a1*c1;
    return d;
}
int main(){
    cout<<"Enter the value of a:";
    float a;
    cin>>a;
    cout<<"Enter the value of b:";
    float b;
    cin>>b;
    cout<<"Enter the value of c:";
    float c;
    cin>>c;
    float determinant=disc(a,b,c);
    if(determinant==0){
        float result=(-1.0*b)/(2.0*a);
        cout<<"Solution: x = "<<result;
    }else if(determinant>0){
        float root1= (-1.0*b+sqrt(determinant))/(2.0*a);
        float root2=(-1.0*b-sqrt(determinant))/(2.0*a);
        cout<<"Solution: x = "<<root1<<" and x = "<<root2;
    }
    else if(determinant<0){
        float root1=(-1.0*b)/(2.0*a);
        float root2=(sqrt(determinant*-1.0))/(2.0*a);
        cout<<"Complex Solution: x= "<<root1<<" + "<<root2<<"i"<<" and x "<<root1<<" - "<<root2<<"i";
    }
}
    
