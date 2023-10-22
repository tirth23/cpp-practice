#include<iostream>
using namespace std;

class Hero {
    
    //properties
    private:
    int health;

    public:
    char level;

    // if removed will give error since tt object has no parameter
    Hero() {
        cout << "Simple constructor called" << endl;
    }

    //Paramerterised Constructor
    Hero(int health) {
        cout << "this -> " << this << endl;
        this -> health = health;
    }

    Hero(int health, char level) {
        this -> level = level;
        this -> health = health;
    }

    int getHealth() {
        return health;
    }

    char getLevel() {
        return level;
    }

    void setHealth(int h) {
        health = h;
    }

    void setLevel(char ch) {
        level = ch;
    }

    void print(){
        cout <<"level: " << level << endl;
    }

};
 
int main() {


    Hero tt;

    //object created statically
    Hero ramesh(10);
    cout << "Address of ramesh " << &ramesh << endl;
    ramesh.print();

    //dynamically
    Hero *h =  new Hero(11);
    cout << "Address of Hero in heap " << h << endl;
    h->print();

    Hero temp(22, 'B');
    temp.print();


    return 0;
}