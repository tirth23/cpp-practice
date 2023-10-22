// #include<iostream>
// #include<string>
// using namespace std;

// int start, count;

// void reverse(char str[], int end) {
//     int en = end;
//     while(start <= end) {
//         swap(str[start], str[end]);
//         start++;
//         end--;
//     }
//     start = en + count + 1;
// }

// int main() {
    
//     char input[100];
    
//     cout << "Enter string:\n" ;
//     cin.getline(input, 100);
//     int len = sizeof(input)/sizeof(char);
    
//     for(int i = 0; i < len; i++) {
//         if(input[i] == ' ' || input[i] == '\0') {
//             count++;
//             reverse(input, i - 1);
//         }
//         count = 0;
//     }
//     cout << input;
//     return 0;
// }

// USING STRING
#include<iostream>
#include<string>
using namespace std;

int start, count;

string reverse(string str, int end) {
    int en = end;
    while(start <= end) {
        swap(str[start], str[end]);
        start++;
        end--;
    }
    start = en + count + 1;
    return str;
}

int main() {
    
    string input = "";
    
    cout << "Enter string:\n" ;
    getline(cin, input);
    int len = input.length();
    
    for(int i = 0; i <= len; i++) {
        if(input[i] == ' ' || input[i] == '\0') {
            count++;
            input = reverse(input, i - 1);
        }
        count = 0;
    }
    cout << input;
    return 0;
}