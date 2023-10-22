#include<iostream>
using namespace std;

class Employee;

class Printer{
public:
    void printEmp(const Employee & e);  
};

class Employee{
private:
    int id;
    string name;
public:
    // printEmp is declared as friend of Employee class
    // printEmp has access to private/protected members of Employee class
    friend void Printer :: printEmp(const Employee & e);
    Employee(int i, string n) : id(i), name(n){}
};

void Printer::printEmp(const Employee & e){
    cout << e.id << ' ' << e.name << '\n';
}

int main()
{
    Printer p;
    Employee e(101, "ABC");
    p.printEmp(e);
    return 0;
}