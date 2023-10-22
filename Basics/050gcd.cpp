#include<iostream>
using namespace std;

// int main()
// {
//     int a, b;
//     cin >> a >> b;
    
//     int x = min(a,b);
//     int ans = 1;
    
//     for(int i = 1; i<=x; i++){
//         if(a%i==0 and b%i==0)
//             ans = i;
//     }
//     cout << ans;
//     return 0;
// }

//Using Euclidean Theorem Iterative approach
int gcd(int a, int b) {

    if(a==0)
    return b;

    if(b==0)
    return a;

    while(a != b) {

        if(a>b)
        {
            a = a-b;
        }
        else{
            b = b-a;
        }
    }
    return b;
    // return a;    // since a == b
}
int main() {
    
    int a,b;
    cout << "Enter the Values of a and b" << endl;
    cin >> a >> b;

    int ans = gcd(a,b);

    cout << " The GCD of " << a << " & " << b << " is: " << ans << endl;



    return 0;
}