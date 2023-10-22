#include<iostream>
using namespace std;

// void reverseString(string& str, int start, int end) {

//     if(start > end) return;

//     swap(str[start], str[end]);
//     start++;
//     end--;

//     reverseString(str, start, end);
// }

//optimize
void reverseString(string& str, int start) {

    int n = str.length();
    if(start == n/2) return;

    swap(str[start], str[n - 1 - start]);
    start++;

    reverseString(str, start);
}

int main() {
    string name = "tirth";

    reverseString(name, 0);
    cout << name;
    
    return 0;
}