#include <iostream>
using namespace std;

int main() {
    
    char vowels[]  {'a' ,'e', 'i', 'o', 'u' };
    cout << "The last vowel is: " << vowels[4] << endl;
    
    // cin >> vowels[6];  //out of bounds - don't do this!! 
    // cout << vowels[6];

    double hi_temps []  { 90.1, 89.8, 77.5, 81.6};
    cout << "\nThe first high temperature is: " << hi_temps[0] << endl;
    
    hi_temps[0] = 100.7;    // set the first element in hi_temps to 100.7
    cout << "The first high temperature is now: " << hi_temps[0] << endl;   
  
    int test_scores [] {100, 90, 80,70, 60};
  
    cout << "\nFirst score at index 0: " << test_scores[0] << endl;
    cout << "Second score at index 1: " << test_scores[1] << endl;
    
    cout << "\nEnter 2 test scores: ";
    cin >> test_scores[0];
    cin >> test_scores[1];
    
    cout << "\nThe updated array is:" << endl;
    cout << "First score at index 0: " << test_scores[0] << endl;
    cout << "First score at index 0: " << test_scores[1] << endl;

    cout << "\nNotice what the value of the array name is : " << test_scores << endl;

    cout << endl;

    int arr[6];
    cout << arr[3] << endl;

    int arr1[6] {};                //bydefault all values be 0
    cout << arr1[3] << endl;

    int arr2[6] {0};               //bydefault all values be 0

    int arr3[6] {2};               //except index 0 all values be 0
    cout << arr3[3] << endl;

    int arr4[6] {2, 3};            //except index 0 & 1 all are 0
    cout << arr4[0] << " " << arr4[1] << " " << arr4[2] << endl;

    char ve[4] {'a', 'v', 'c'};
    cout << ve[2] << endl;

    int ar[10];
    fill_n(ar,10,92);//By this code all the values of the array will get initialized by 92 
    for(int i=0;i<10;i++){
        cout<<ar[i]<<"  "; //By this the array will print the initialized value (i.e. 92) 10 times 
    }
    return 0;
}

