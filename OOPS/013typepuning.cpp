#include<iostream>
using namespace std;

union Test1
{
    int x;
    float y;
};

union Test2
{
  int x;
  char bin[4]; 
};

int main()
{
    Test1 t1;
    t1.y = 1.1;
    cout << t1.x << '\n';
    // x represents binary value of y in memory in decimal format
    // [memory block]
    //     /     \  
    //    x       y
     
    Test2 t2;
    t2.x = 512;
    cout << (int)t2.bin[0] << " " << (int)t2.bin[1] << " "
         << (int)t2.bin[2] << " " << (int)t2.bin[3]; 
    // all 4 bytes represenst binary value of 512 in decimal format
    // 512 in binary            :- 0000 0010 0000 0000
    // In deciaml in char array :-    0    2    0    0

    return 0;
}