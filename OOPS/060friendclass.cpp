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
    // Printer class is declared as friend of Employee class
    // Printer and its function can access private/protected data members of Employee
    
    friend class Printer;
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