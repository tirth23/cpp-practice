#include<iostream>
using namespace std;

class Hero {
    
    //properties
    private:
    int health;

    public:
    char level;
    
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

};

int main() {
    
    //static allocation
    Hero a;
    a.setHealth(80);
    a.setLevel('B');
    cout << "level is  " << a.level << endl;
    cout << " health is " << a.getHealth() << endl;

    //dynamicallly
    Hero *b = new Hero();
    b->setLevel('A');
    b->setHealth(70);
    cout << "level is  " << (*b).level << endl;
    cout << " health is " << (*b).getHealth() << endl;


    cout << "level is  " << b->level << endl;
    cout << " health is " << b->getHealth() << endl;

    //creation of Object
    Hero ramesh;   
    cout << "Size of Ramesh is " << sizeof(ramesh) << endl;

    // use getter
    cout << "Ramesh health is " << ramesh.getHealth() << endl;
    // use setter
    ramesh.setHealth(70);
    ramesh.level = 'A';


    cout << "health is: " << ramesh.getHealth() << endl; 
    cout << "Level is: " << ramesh.level << endl; 

    //cout << "size : " << sizeof(h1) << endl;


    return 0;
}