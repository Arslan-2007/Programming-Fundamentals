#include<iostream>
using namespace std;
float taxCalculator(char type,float price){
    float total;
    float tax;
    if(type=='m'){
        tax=price*(6.0/100.0);
        total=price+tax;
    }
    else if(type=='e'){
        tax=price*(8.0/100.0);
        total=price+tax;
    }
    else if(type=='s'){
        tax=price*(10.0/100.0);
        total=price+tax;
    }
    else if(type=='v'){
        tax=price*(12.0/100.0);
        total=price+tax;
    }
    else if(type=='t'){
        tax=price*(15.0/100.0);
        total=price+tax;
    }
    return total;
}
int main(){
    cout<<"Enter vehicle type code(m/e/s/v/t):";
    char type;
    cin>>type;
    cout<<"Enter vehicle price:";
    float price;
    cin>>price;
    float total=taxCalculator(type,price);
    if(type=='m'){
        cout<<"The final price on a vehicle of type Motorcycle after adding tax is $"<<total;
    }
    else if(type=='e'){
        cout<<"The final price on a vehicle of type Electric after adding tax is $"<<total;

    }
    else if(type=='s'){
        cout<<"The final price on a vehicle of type Sedan after adding tax is $"<<total;
    }
    else if(type=='v'){
        cout<<"The final price on a vehicle of type Van after adding tax is $"<<total;
    }
    else if(type=='t'){
        cout<<"The final price on a vehicle of type Truck after adding tax is $"<<total;
    }
}