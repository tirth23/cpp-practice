#include <iostream>
using namespace std;

int main() {
	
	int x = 33;

	// x >> y => x/(pow(2, y))
	
	cout<<(x >> 1)<<endl;
	
	cout<<(x >> 2)<<endl;
	
	int y = 4;
	
	int z = x >> y;
	
	cout << z << endl;
	
	
	return 0;
}