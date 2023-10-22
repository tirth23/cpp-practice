#include <iostream>
using namespace std;
int main()
{   
    cout << "Prefixes in Integer Literals\n" ; 
	{
    	int a = 20 ;  //Decimal
    	int b = 0x1A; //Hexadecimal
    	int c = 016;  //Octal
    	int d = 0b11; //Binary
    	cout << a << "\n"
    	     << b << "\n"
    	     << c << "\n"
    	     << d << "\n";
	}
	cout << "Suffixes in Integer Literals\n";
	{
	    int a = 124;
	    unsigned b = 124u;
        unsigned long c = 124ul;
        unsigned long long d = 124ull;
	    long int e = 124L;
	    long long int f = 124LL;
	    cout << a << "\n"
	         << b << "\n"
	         << c << "\n"
	         << d << "\n"
             << e << "\n"
             << f << "\n";
	}
	cout << "Floating Point Literals\n";
	{
	    float  a = 10.5f;
	    double b = 10.515;
	    float  c = 2.1e15f;
	    double d = 200.1e-80;
	    double f = 0x1A.1p2;
        long double e = 3000e459l;
	    cout << a << "\n"
    	     << b << "\n"
    	     << c << "\n"
    	     << d << "\n"
    	     << f << "\n"
             << e << "\n"; 
	}
	cout << "Character and String Literals\n";
	{
	    char c = 'g';
	    const char *s1 = "gfg";
	    string s2 = "courses";
	    cout << c  << "\n"
	         << s1 << "\n"
	         << s2 << "\n";
	}
	return 0;
}