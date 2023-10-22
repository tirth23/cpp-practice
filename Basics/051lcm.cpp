#include<iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    
    int start = max(a,b);
    int end = a*b;
    int ans = start;
    
    for(int i = start; i <= end; i++)
    {
        if(i%a==0 and i%b==0) 
        {
            ans = i;
            break;
        }
    }

    // while (true) {
    //     if (start % a == 0 && start % b == 0) {
    //         ans = start;
    //         break;
    //     }
    //     start++;
    // }
    
    cout << ans;
    return 0;
}