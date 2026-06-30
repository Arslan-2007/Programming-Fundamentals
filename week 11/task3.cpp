#include<iostream>
using namespace std;
void blueCars(int carData[][5],int rowsize){
    cout<<"Toyota Blue Cars"<<carData[1][4];
}
int totalRedCars(int carData[][5],int rowsize){
    int sum=0;
    for(int i=0;i<rowsize;i++){
        sum=sum+carData[i][0];
    }
    // cout<<"Total number of red cars is "<<sum;
    return sum;
}
int totalNissanCars(int carData[][5],int rowsize){
    int sum=0;
    for(int i=0;i<5;i++){
        sum=sum+carData[2][i];
    }
    return sum;
}
int converter(int carData[][5],int rowize,string color){
    int sum=0;
    if(color=="red"){
        for(int i=0;i<5;i++){
           sum=sum+carData[i][0]; 
        } 
        return sum;
    }
    else if(color=="black"){
        for(int i=0;i<5;i++){
          sum=sum+carData[i][1];  
        } 
        return sum;
    }
    else if(color=="brown"){
        for(int i=0;i<5;i++){
          sum=sum+carData[i][2];  
        } 
        return sum;
    }
    else if(color=="blue"){
        for(int i=0;i<5;i++){
          sum=sum+carData[i][3];  
        } 
        return sum;
    }
    else if(color=="gray"){
        for(int i=0;i<5;i++){
          sum=sum+carData[i][4];  
        } 
        return sum;
    }
}
void rowsToColumns(int carData[][5],int rowsize){
    for(int i=0;i<rowsize;i++){
        for(int j=0;j<5;j++){
            cout<<carData[j][i]<<"\t";
        }
        cout<<endl;
    }
}
int main(){
    int rowsize=5;
    int column=5;
    int carData[rowsize][5]={
        {10,7,5,4,6},
        {45,12,6,9,6},
        {0,5,4,2,1,},
        {9,6,8,7,5},
        {45,65,32,12,45}
    };
    blueCars(carData,rowsize);
    cout<<"\t"<<endl;
    cout<<"Total Red Cars:"<<totalRedCars(carData,rowsize)<<endl;
    cout<<"Total Nissan Cars:"<<totalNissanCars(carData,rowsize)<<endl;
    cout<<"Enter the color of which you want to know sum of cars:";
    string color;
    cin>>color;
    cout<<"Total cars of color "<<color<<":"<<converter(carData,rowsize,color);
    cout<<endl;
    cout<<"Conversion of rows to columns is as follows\t";
    rowsToColumns(carData,rowsize);

}
