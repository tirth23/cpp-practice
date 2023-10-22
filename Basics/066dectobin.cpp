#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int lastbit, ans = 0, i = 0;
    while (n != 0) {
        lastbit = n & 1;
        ans = ans + (lastbit * pow(10, i));
        i++;
        n = n >> 1;
    }
    cout << ans;
    

    // ans = 0;
    // int i = 0;
    // if(n < 0) {
    //     n = -1 * n;
    // }
    // while (n != 0)
    // {
    //     int bit = n & 1; //reads last bit
    //     ans = ans + (bit * pow(10, i));
    //     n = n >> 1; //helps to read the other bits by shifting it to the right
    //     i++; 
    // }  
    // cout<< "Binary equivalent: " << (~ans + 1) * -1;
    
    return 0;
}