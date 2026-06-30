#include<iostream>
using namespace std;
string english(int num1){
    string word;
    string word1;
    int num=num1%10;
    if(num==1){
        word="one";
    }
    if(num==2){
        word="two";
    }
    if(num==3){
        word="three";
    }
    if(num==4){
        word="four";
    }
    if(num==5){
        word="five";
    }
    if(num==6){
        word="six";
    }
    if(num==7){
        word="seven";
    }
    if(num==8){
        word="eight";
    }
    if(num==9){
        word="nine";
    }
    if(num1==10){
        word="ten";
    }
    if(num1==11){
        word="eleven";
    }
    if(num1==12){
        word="twelve";
    }
    if(num1==13){
        word="thirteen";
    }
    if(num1==14){
        word="fourteen";
    }
    if(num1==15){
        word="fifteen";
    }
    if(num1==16){
        word="sixteen";
    }
    if(num1==17){
        word="seventeen";
    }
    if(num1==18){
        word="eighteen";
    }
    if(num1==19){
        word="nineteen";
    }
    if(num1>=20){
        word1="twenty";
    }
    if (num>=30){
        word1="thirty";
    }
    if(num1>=40){
        word1="fourty";
    }
    if(num1>=50){
        word1="fifty";
    }
    if(num1>=60){
        word1="sixty";
    }
    if(num1>=70){
        word1="seventy";
    }
    if(num1>=80){
        word1="eighty";
    }
    if(num1>=90 && num1<100){
        word1="ninety";
    }
    string sum=word1+word;
    return sum;
}
int main(){
    cout<<"Enter a number[1-99]:";
    int number;
    cin>>number;
    string names=english(number);
    cout<<names;
   return 0;
}