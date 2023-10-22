#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double x = 1.23, y = 1122456.453;
    cout << std::fixed;
    cout << x << "\n"
         << y << "\n";
    cout << std::setprecision(2);
    //In fixed precision is counted as digits after decimal point
    cout << x << "\n"
         << y << "\n";
    double z = 1.2e+7;
    cout << z << '\n';
    cout << std::defaultfloat;   
    //In default precision is counted as total digits
    cout << x << "\n"
         << y << "\n";
    return 0;
}