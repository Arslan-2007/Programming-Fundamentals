#include <iostream>
using namespace std;
void time(int hours, int minutes)
{
    int add = minutes + 15;
    int hour = hours;
    if (add > 59)
    {
        int hourfinal =hour + 1;
        int final = add - 60;
        add = 0;
        add = final;
        if(hourfinal>23){
            int final1=hourfinal-24;
            hourfinal=final1;
        }
        cout << hourfinal << ":" << add;
    }
    else
    {
        cout << hour << ":" << add;
    }
}
int main()
{
    cout << "Enter Hours:";
    int hours;
    cin >> hours;
    cout << "Enter Minutes:";
    int minutes;
    cin >> minutes;
    time(hours, minutes);
    return 0;
}