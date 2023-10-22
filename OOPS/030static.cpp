#include<iostream>
using namespace std;

class Hero {
    
    public:
    static int timeToComplete;

    Hero() {
        cout << "Simple constructor called" << endl;
    }

    static int random() {
        return timeToComplete ;
    }

};

int Hero::timeToComplete = 5;

int main() {

    cout << Hero::timeToComplete << endl;
    cout << Hero::random() << endl;

    // we can access static member via object but not recommened
    // Hero a;
    // cout << a.timeToComplete << endl;


    // Hero b;
    // b.timeToComplete = 10 ;
    // cout  << a.timeToComplete << endl;
    // cout << b.timeToComplete << endl;

    return 0;
}