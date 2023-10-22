#include<iostream>
#include<string.h>
using namespace std;

class Hero {
    
    public:
    Hero() {
        cout << "Simple constructor called" << endl;
    }

    //Destructor
    ~Hero() {   
        cout << "Destructor bhai called" << endl;
    }

};

int main() {

    // //Static
    Hero a;

    //Dynamic
    Hero *b = new Hero();
    //manually destructor call for dynamic allocation
    delete b;

    return 0;
}