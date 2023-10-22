#include<iostream>
#include<vector>
using namespace std;

bool uniqueOccurrences(vector<int>& arr) {
	int size = arr.size();
	vector<int> ans;

	for (int i = 0; i < size; i++) {
		int temp = arr[i];
		int count = 0;

		if(temp != INT_MIN) {
			for(int j = 0; j < size; j++) {
				if(temp == arr[j]) {
					count++;
					arr[j] = INT_MIN;
				}
			}
		}
		if(count > 0) ans.push_back(count);
	}
	// for(int i = 0; i < ans.size(); i++) {
	// 	cout << ans[i] << " ";
	// }
	int ans_size = ans.size();
	for(int i = 0; i < ans_size; i++) {
		int freq = 0;
		for(int j = 0; j < ans_size; j++) {
			if(ans[i] == ans[j]) {
				freq++;
			}
		}
		if(freq > 1) return false;
	}
	return true;
	
}
int main() {
	vector<int> arr1 = {1,2,2,1,1,3};

	cout << uniqueOccurrences(arr1);
	return 0;
}