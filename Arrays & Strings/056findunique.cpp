#include<iostream>
using namespace std;

void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}
int findUnique(int arr[], int temp[], int size) {
   int j = 0;
   
    for(int i = 0; i < size; i++) {
        if(arr[i] != arr[i+1]){
            temp[j] = arr[i];
            j++;
        }
    }
    return j;
}

int main() {
    int arr[] = {1, 2, 2, 3, 5, 5, 5, 9, 10, 10, 10};
    int size = sizeof(arr)/sizeof(arr[0]);
    int temp[size] {0};
    int n = findUnique(arr, temp, size);
    printArray(temp, n);
    return 0;
}




// #include <iostream>
// #include <cmath>
// using namespace std;

//  int remDups(int arr[], int n)
// {
// 	int temp[n];

// 	temp[0] = arr[0];

// 	int res = 1;

// 	for(int i = 1; i < n; i++)
// 	{
// 		if(temp[res - 1] != arr[i])
// 		{
// 			temp[res] = arr[i];
// 			res++;
// 		}
// 	}

// 	for(int i = 0; i < res; i++)
// 	{
// 		arr[i] = temp[i];
// 	}

// 	return res;
// }
    
// int main() {
	
//       int arr[] = {10, 20, 20, 30, 30, 30}, n = 6;

//       cout<<"Before Removal"<<endl;

//        for(int i = 0; i < n; i++)
//        {
//        		cout<<arr[i]<<" ";
//        }

//        cout<<endl;

//        n = remDups(arr, n);

//        cout<<"After Removal"<<endl;

//        for(int i = 0; i < n; i++)
//        {
//        		cout<<arr[i]<<" ";
//        }
    
// }