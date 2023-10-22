 #include <iostream>

using namespace std;

int main()
{
    int i = 10;
    int *ptrToI = &i;
    int &refToI = i;

    cout << "i = " << i << "\n";
    cout << "&i = " << &i << "\n";

    cout << "ptrToI = " << ptrToI << "\n";
    cout << "*ptrToI = " << *ptrToI << "\n";
    cout << "&ptrToI = " << &ptrToI << "\n";

    cout << "refToNum = " << refToI << "\n";
    //cout << "*refToNum = " << *refToI << "\n";
    cout << "&refToNum = " << &refToI << "\n";

    return 0;
}