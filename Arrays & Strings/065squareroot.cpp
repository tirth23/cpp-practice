#include<iostream>
using namespace std;

//     long long is used if n = 1000000 then mid*mid will over flow

long long int squrRoot(unsigned int n) {
    int s = 0;
    int e = n;
    long long int ans = -1;
    long long int mid;
    
    while(s <= e) {
        mid = s + (e - s)/2;
        
        long long int square = mid * mid;
        
        if(square == n) return mid;
        
        if(square < n) {
            ans = mid;
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
    }
    return ans;
}

/*
0.1 -----> 5.1 * 5.1 < 27, 5.2 * 5.2 > 27,____+0.1____
0.01 ----> 5.11 * 5.11 < 27, 5.12 * 5.12 < 27,_____+0.01____,5.19 * 5.19 < 27, 5.20 * 5.20 > 27
0.001 ---> 5.191 * 5.191 < 27,____+0.001____, 5.196 * 5.196 < 27, 5.197 * 5.197 > 27 
*/

double morePrecision(int n, int precision, int root) {
    double factor = 1;
    double ans = root;

    for (int i = 0; i < precision; i++) {
        factor = factor / 10;

        for(double j = ans; j * j < n; j = j + factor) {
            ans = j;
        }
    }
    return ans;
}

int main() {

    int n;
    cout << "Enter number: ";
    cin >> n;

    int root = squrRoot(n);
    // cout << root;
    cout << morePrecision(n, 3, root);

    return 0;
}