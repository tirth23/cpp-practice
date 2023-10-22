#include<iostream>
using namespace std;

int main() {

    // int first = 8;
    // int second = 18;
    // int *ptr = &second;
    // *ptr = 9;
    // cout  << first << " " << second << endl; 

    // int first = 6;
    // int *p = &first;
    // int *q = p;
    // (*q)++;
    // cout << first  << endl;

    // int first = 8;
    // int *p = &first;
    // cout << (*p)++ << " ";
    // cout << first << endl;

    // int *p = 0;        //p is nullpointer
    // int first = 110;
    // *p = first;
    // cout << *p << endl;

    // int *p = 0;        //p is nullpointer
    // int first = 110;
    // p = &first;
    // cout << *p << endl;

    // int first = 8;
    // int second = 11;
    // int *third = &second; 
    // first = *third;
    // *third = *third + 2;
    // cout  << first << "  " << second << endl;

    // float f = 12.5;
    // float p = 21.5;
    // float* ptr = &f;
    // (*ptr)++;
    // *ptr = p;
    // cout << *ptr << " " << f << " " << p << endl;

    // int arr[5];
    // int *ptr;
    // cout << sizeof(arr) << " " << sizeof(ptr) << endl;

    // int arr[] = {11, 21, 13, 14};
    // cout << *(arr) << " " << *(arr+1) << endl;

    // int arr[6] = {11, 12, 31};
    // cout << arr << " " << &arr << " " << &arr[0] << endl;

    // int arr[6] = {11, 21, 13};
    // cout << (arr + 1) << endl;

    // int arr[6] = {11, 21, 31};
    // int *p = arr;
    // cout << p[2] << " " << *(p + 2) << endl;

    // int arr[] = {11, 12, 13, 14, 15};
    // cout << *(arr) << " " << *(arr + 3);

    // int arr[] = {11, 21, 31, 41};
    // int *ptr = arr++;        
    // //arr is constant pointer and we can't change data in symbol table
    // cout << *ptr << endl;

    // int first = 10;
    // int *p = &first;
    // int **q = &p;
    // int second = 20;
    // *q = &second;
    // (*p)++;
    // cout << first << " " << second << endl;

    // int first = 110;
    // int *p = &first;
    // int **q = &p;
    // int second = (**q)++ + 9;
    // cout << first << " " << second << endl; 

    // int first = 100;
    // int *p = &first;
    // int **q = &p;
    // int second = ++(**q);
    // int *r = *q;
    // ++(*r);
    // cout << first << " " << second << endl; 

    // int arr[] = {41, 52, 36, 74};
    // int *p = (arr + 1);
    // cout << *arr + 8 << " " << *p;

    // float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
    // float *ptr1 = &arr[0];
    // float *ptr2 = ptr1 + 3;
    // cout<<*ptr2<<" ";
    // cout<< ptr2 - ptr1;

    // int ***r, **q, *p, i=8;
    // p = &i;
    // (*p)++;
    // q = &p;
    // (**q)++;
    // r = &q;
    // cout<<*p << " " <<**q << " "<<***r;

     // char ch = 'a';
    // char* ptr = &ch;
    // ch++;
    // cout << *ptr << endl;

    // char arr[] = "abcde";
    // char *p = &arr[0];
    // cout << *p << " " << p << endl;

    // char arr[] = "abcde";
    // char *p = &arr[0];
    // p++;
    // cout << p << endl;       //it will print from address until \0 not found

    // string arr = "abcde";
    // char *p = &arr[1];
    // p++;
    // cout << p << endl;  

    // string arr = "abcde";
    // string *p = &arr;
    // cout << p << " " << &arr[0] << endl;  

    // char* c = "abcde";
    // cout << c;

    // char str[]= "babbar";
    // char *p = str;
    // cout << str[0] << " " << p[0] << " " << p << endl;

    // char *p; 
    // char str[] = "pqrstuv";
    // p = str;
    // p += 3;
    // cout << p;

    // char arr[20];
    // int i;
    // for(i = 0; i < 10; i++) {
    //     *(arr + i) = 65 + i;
    // }
    // *(arr + i) = '\0';
    // cout << arr;

    // char st[] = "ABCD";
    // for(int i = 0; st[i] != '\0'; i++) {
    //     cout << st[i] << *(st)+i << *(i+st) << i[st] << endl;
    // }

    return 0;
}