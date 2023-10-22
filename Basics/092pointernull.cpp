#include<iostream>
using namespace std;

int main()
{
    int *p = NULL;
    int can;
    cin >> can;
    if(can%2==1){
        p = new int(1);
    }
    if(p!=NULL){
        cout << *p << '\n';
    }
    return 0;
}