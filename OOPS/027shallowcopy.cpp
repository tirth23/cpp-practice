#include<iostream>
#include<string.h>
using namespace std;

class Hero {
    
    //properties
    private:
    int health;

    public:
    char *name;
    char level;

    Hero() {
        cout << "Simple constructor called" << endl;
        name = new char[100];
    }

    void print(){
        cout << endl;
        cout << "[ Name: " << this->name<< ", ";
        cout << "HealthL " << health << ", ";
        cout <<"level: " << this->level << " ]";
        cout << endl << endl;
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

    void setName(char name[]) {
        strcpy(this->name, name);
    }
};

int main() {


    Hero hero1;

    hero1.setHealth(12);
    hero1.setLevel('D');
    char name[7] = "Babbar";
    hero1.setName(name);

    hero1.print();

    //use default copy constructor
    Hero hero2(hero1);
    hero2.print();

    hero1.name[0] = 'G';
    hero1.setHealth(13);
    hero1.print();

    hero2.print();

    return 0;
}