#include <iostream>
using namespace std;
int min(int num1, int num2)
{
    int minimum = num1;
    if (num2 < num1)
    {
        minimum = num2;
    }
    return minimum;
}
int main()
{
    cout << "Enter 1st number:";
    int number1;
    cin >> number1;
    cout << "Enter 2nd number:";
    int number2;
    cin >> number2;
    int minimumnum = min(number1, number2);
    cout << "Minimum Number is " << minimumnum;
}