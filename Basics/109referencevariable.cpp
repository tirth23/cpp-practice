#include<iostream>
using namespace std;

// //error since num is local variable
// int& fun(int a) {
//     int num = a;
//     int& ans = num;
//     cout << ans << endl;
//     return ans;
// }

//error since n is local variable
int* fun(int n) {
    int* ptr = &n;
    cout << ptr << endl;
    return ptr;
}

void update(int& n) {
    n++;
}

// void update(int n) {
//     n++;
// }

int main() {

    
    int i = 5;

    //create a ref variable 

    int& j = i;

    cout << i << endl; 
    i++;
    cout << i << endl; 
    j++;
    cout << i << endl; 
    cout << j << endl;
    

   int n = 5;
   
   cout << "Before " << n << endl;
   update(n);
   cout << "After " << n << endl;


   cout << fun(n);

    return 0;
}