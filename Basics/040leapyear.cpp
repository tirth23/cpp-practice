#include<iostream>

using namespace std;

//A leap year is exactly divisible by 4 except for century years (years ending with 00). 
//The century year is a leap year only if it is perfectly divisible by 400

int main()
{
    int year;
    cin >> year;
    if(year % 4 == 0 and year % 100 != 0)
    {
        cout << "Leap Year";
    }
    else if(year % 400 == 0)
    {
        cout << "Leap Year";
    }
    else
    {
        cout << "Not a Leap Year";
    }
    return 0;
}