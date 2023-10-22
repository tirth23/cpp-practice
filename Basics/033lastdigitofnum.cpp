#include <bits/stdc++.h>

using namespace std;

int main() {

	int x = -235;
	
	int ans = abs(x) % 10;    //% doesn't work properly with negative numbers
	
	cout << ans;
	
	return 0;
}