// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        int arr[26] {};
        int len = str.length();
        
        for(int i = 0; i < len; i++) {
            char ch = str[i];
            
            int num = ch - 'a';
            arr[num]++;
        }
        
        int maxi = -1, ans;
        for(int i = 0; i < 26; i++) {
            if(maxi < arr[i]) {
                ans = i;
                maxi = arr[i];
            }
        }
        return ans + 'a';
    }

};

// { Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}  // } Driver Code Ends