#include<iostream>
#include <cstring>      
#include <cctype> 
using namespace std;

int main() {
    char one[] {"tir"};
    char two[] = "TIRT";
    cout << strcmp(one, two) << endl;

    /*
    Zero ( 0 ): A value equal to zero when both strings are found to be identical. That is, That is, All 
    of the characters in both strings are same.

    Greater than zero ( >0 ): A value greater than zero is returned when the first not matching character in 
    leftStr have the greater ASCII value than the corresponding character in rightStr.

    Less than Zero ( <0 ): A value less than zero is returned when the first not matching character in 
    leftStr have lesser ASCII value than the corresponding character in rightStr.
    */

   char a[10] = {'T', 'i', 'r'};
   char b[10] = {"Tir"};
   char d[10] = "Tir";
   
   cout << strcmp(a, b) << endl;

   a[2] = 'a';
   cout << a[2];

   char c[4];
   c[0] = 'r';

   char name[10];
   cin >> name;
   cout << name;

    //for int array not possible
    // int arr[10];
    // cin >> arr;
    // cout << arr;
    return 0;
}