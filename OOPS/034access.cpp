#include<iostream>
using namespace std;

class Human {

    protected:
    int height;

    public: 
    int weight;
    int age;

    public:
    int getAge() {
        return this->age;
    }

    void setWeight(int w) {
        this->weight = 20;

    }

};

class Male: private Human {

    public:
    string color;

    void sleep() {
        cout << "Male Sleeping" << endl;
    }

    int getHeight() {
        cout<<"hji";
        return height;
    }

};



int main() {

    Male m1;
    // cout << m1.height << endl;
   // cout << m1.setHeight(10);
    cout << m1.getHeight();




    // Male object1;
    // cout << object1.age << endl;
    // cout << object1.weight << endl;
    // cout << object1.height << endl;

    // cout << object1.color << endl;

    // object1.setWeight(84);
    // cout << object1.weight << endl;
    // object1.sleep();
    

    return 0;
}