#include<iostream>
using namespace std;

void print(int *p) {

    cout << *p << endl; 

}

void update(int *p) {

   // p = p + 1;
   //cout << "inside "<< p <<endl;
   *p = *p + 1;

}

int getSum(int *arr, int n) {    //int arr[], int n

    cout << endl << "Size : " << sizeof(arr) << endl;

    int sum = 0;
    for(int i=0;i<n;i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {

    int value = 5;
    int *p = &value;

    //print(p);

    // cout <<" Before " << p << endl;
    // update(p);
    // //here p is passed by value so in local function only updated value will be changed
    // cout <<" After " << p << endl;

    // cout <<" Before " << *p << endl;
    // update(p);
    // //internal value can be updated
    // cout <<" After " << *p << endl;
    

    int arr[6] = {1,2,3,4,5,8};

    cout << "Sum is " << getSum(arr+3 ,3) << endl ;  

    return 0;
}