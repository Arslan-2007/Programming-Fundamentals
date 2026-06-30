#include<iostream>
using namespace std;
bool is_symmetrical(int num){
    int n1,n2,n3;
    n1=num%10;
    num=num/10;
    n2=num%10;
    num=num/10;
    n3=num%10;
    if(n1==n3 && n3==n1){
        return true;

    }else{
        return false;
    }
}
int main(){
    cout<<"ENter a three digit number:";
    int num;
    cin>>num;
    bool check=is_symmetrical(num);
    if(check){
        cout<<"The number is symmetrical.";
    }
    if(!check){
        cout<<"The numer is not symmetrical.";
    }

}