#include<iostream>
using namespace std;
int main(){
    string colors[5]={"Red","Black","Brown","Blue","Gray"};
    int carData[5][5]={
        {10,7,5,4,6},
        {45,12,6,9,6},
        {0,5,4,2,1,},
        {9,6,8,7,5},
        {45,65,32,12,45},
    };
    for(int i=0;i<5;i++){
        cout<<colors[i]<<"\t";
    }
    cout<<endl;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<carData[i][j]<<"\t";
        }

        cout<<endl;
    }
    
}