#include<iostream>
using namespace std;

//when r-value is literal or result of expression, const or [&& (double reference)] is used

void print(const string &s)
{
    cout << s << '\n';
}
void editAndPrint(string &&s)
{
    s = "Hi, " + s;
    cout << s << "\n";
}
int main()
{
    print("Welcome to GeeksforGeeks");
    editAndPrint("Welcome to GeeksforGeeks");
    return 0;
}