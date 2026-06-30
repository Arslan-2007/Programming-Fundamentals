#include<iostream>
using namespace std;
void printCars(int carData[][5],int rowSize){
    for(int i=0;i<rowSize;i++){
        for(int j=0;j<5;j++){
            cout<<carData[i][j]<<"\t";
        }
        cout<<endl;
    }
}
main(){
    int rowSize=5;
    int column=5;
    int carData[rowSize][5]={
        {10,7,5,4,6},
        {45,12,6,9,6},
        {0,5,4,2,1,},
        {9,6,8,7,5},
        {45,65,32,12,45}
    };
    printCars(carData,rowSize);
}