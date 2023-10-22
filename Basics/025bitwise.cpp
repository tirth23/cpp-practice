#include <iostream>
using namespace std;

int main() {
	
	int x = 3, y = 6;
	
	cout<<(x & y)<<endl;
	
	cout<<(x | y)<<endl;
	
	cout<<(x ^ y)<<endl;
	
	cout << ~x;

	// 011
	// 100 -> In memory, as negation is there 

	// for print
	// leading 1 means negative number is there
	// now 2's of 00:-
	// 00
	// 11
	// 100 -> 4
	// Answer is -4 

	return 0;
}