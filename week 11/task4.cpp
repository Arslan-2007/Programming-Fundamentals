#include<iostream>
using namespace std;
void printSum(int array[][3],int rowSize){
    int sum=0;
    for(int i=0;i<rowSize;i++){
        for(int j=0;j<3;j++){
            sum=sum+array[i][j];
        }
    }
    cout<<"Total sum of numbers:"<<sum;
}
int main(){
    cout<<"Enter row size:";
    int rowSize;
    cin>>rowSize;
    int array[rowSize][3];
    for(int i=0;i<rowSize;i++){
        for(int j=0;j<3;j++){
            cout<<"Enter element at position["<<i<<"]["<<j<<"]:";
            cin>>array[i][j];
        }
    }
    printSum(array,rowSize);
}
