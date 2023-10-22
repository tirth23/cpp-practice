#include <iostream>
#include <cmath>
#include <bits/stdc++.h> 
#include <climits>
#include <deque>
using namespace std;

//passing array using double pointer
void print(int **arr, int m, int n)
{
	for(int i = 0; i < m; i++)
	{
		for(int	j = 0; j < n; j++)
			cout << arr[i][j] << " ";
	}
}

int main()
{	
	int m = 3, n = 2;

	int **arr;
    arr = new int *[m];

	for(int i = 0; i < m; i++)
	{
		arr[i] = new int[n];

		for(int j = 0; j < n; j++)
		{
			arr[i][j] = i;

			//cout << arr[i][j] << " ";
		}
	}
    print(arr, m ,n);


	return 0;
}