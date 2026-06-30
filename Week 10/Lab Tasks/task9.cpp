#include<iostream>
using namespace std;
bool check(int num){
    int n1,n2,n3,n4,n5;
    n1=num%10;
    num=num/10;
    n2=num%10;
    num=num/10;
    n3=num%10;
    num=num/10;
    n4=num%10;
    num=num/10;
    n5=num%10;
    int sum=n1+n2+n3+n4+n5;
    if(sum%2==0){
        return true;
    }else{
        return false;
    }
}
int main(){
    cout<<"Enter a five-digit number:";
    int number;
    cin>>number;
    bool checking=check(number);
    if(checking){
        cout<<"The number is Evenish.";
    }
    if(!checking){
        cout<<"The number is Oddish.";
    }
    return 0;
}