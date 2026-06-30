#include<iostream>
using namespace std;
bool check(char a){
    if(a=='A'){
        return true;
    }else{
        return false;
    }

}
int main(){
    cout<<"Enter a character (A/a):";
    char a;
    cin>>a;
    bool checka=check(a);
    if(checka){
        cout<<"You have enter capital A.";
    }
    if(!checka){
        cout<<"You have entered small a.";
    }

}