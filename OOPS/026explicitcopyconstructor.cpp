#include<iostream>
using namespace std;

class Hero {
    
    //properties
    private:
    int health;

    public:
    char *name;
    char level;
    static int timeToComplete;

    Hero() {
        cout << "Simple constructor called" << endl;
        name = new char[100];
    }

    Hero(int health, char level) {
        this -> level = level;
        this -> health = health;
    }

    //own copy constructor
    Hero(Hero& temp) {
        cout << "Copy constructor called" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    void print(){
        cout << "HealthL " << health << endl;
        cout <<"level: " << this->level << endl;
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

};

int Hero::timeToComplete = 5;

int main() {


    Hero S(70, 'C');
    S.print();

    //it means copy all values in S to R
    //explicit copy constructor will be called instead of default
    Hero R(S);
    R.print();

    return 0;
}