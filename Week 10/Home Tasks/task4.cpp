#include<iostream>
using namespace std;
string projectTimeCalculation(int needed_hours,int days,int workers){
    int available_days=days-(days*(10/100));
    int work=available_days*10*workers;
    if(needed_hours>work){
        cout<<"Not enough time {"<<needed_hours-work<<"} hours needed.";
    }else{
        cout<<"Yes! {"<<work-needed_hours<<"} hours left.";
    }
}
int main(){
    cout<<"Enter needed hours:";
    int needed_hours;
    cin>>needed_hours;
    cout<<"Enter the number of the days of firm:";
    int days;
    cin>>days;
    cout<<"Enter the number of workers:";
    int workers;
    cin>>workers;
    string result=projectTimeCalculation(needed_hours,days,workers);

}

