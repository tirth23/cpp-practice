#include<iostream>
using namespace std;

//shared memory usage can be done with either reference variable or global variable
//global variable is not a recommened practice-main, a, b can use score
//reference variable is a recommened practice-main, a, b can use i by passing reference   
//               5
//              /|\
//            i ai bi

//global variable
int score = 15;

void b(int& bi) {
    cout << score << " in b" << endl;
    cout << bi << endl;
}

void a(int& ai) {

    cout << score << " in a" << endl;
    score++;
    cout << ai << endl;
    b(ai);
}

int main() {
    cout << score << " in main" << endl;
    int i = 5;
    a(i);

    return 0;
}