#include <iostream>
#include <cmath>
#include <bits/stdc++.h> 
#include <climits>
#include <deque>
using namespace std;


int main()
{	
	int m = 3, n = 2;
	int **arr;
    //**arr will point to array of pointers

	arr = new int* [m];
    //assigning array of pointers to arr
    //arr stores atart address of array

	for(int i = 0; i < m; i++)
		arr[i] = new int[n];
    //dynamically allocating array of size n to each element in arr
    //arr[i] stores start address of each array
    //thus 2d array of arr[m][n] is made using pointers

	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			arr[i][j] = 10;	

			cout << arr[i][j] << " ";
		}
	}


	return 0;
}