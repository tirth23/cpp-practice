#include<iostream> 
using namespace std;

#define PI 3.14

int main() {

    int r = 5;
    //double pi = 3.14;

    double area = PI * r * r;
    //PI = PI + 1;    //error since it isn't a variable. macros are replaced before compilation

    cout << "Area is " << area << endl;
  
    return 0;
}