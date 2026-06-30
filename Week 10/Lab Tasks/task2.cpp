#include<iostream>
#include<cmath>
using namespace std;
// int power(int num1,int num2){
//     int pw=num1^num2;
//     return pw;
// }
int main(){
    cout<<"Enter 1st number:";
    int number1;
    cin>>number1;
    cout<<"Enter 2nd number:";
    int number2;
    cin>>number2;
    int power1=pow(number1,number2);
    cout<<number1<<" raised to power "<<number2<<" is "<<power1; 
}