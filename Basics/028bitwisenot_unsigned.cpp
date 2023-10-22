#include <iostream>
using namespace std;

int main() {
	
	unsigned int x = 1;
	// (pow(2, 32) - 1) - 1
	cout<<(~ x)<<endl;
	
	x = 5;
	// (pow(2, 32) - 1) - 5
	cout<<(~ x)<<endl;
	
	
	return 0;
}