#include<iostream>
using namespace std;

struct Student
{
  int roll;
  int age;
  string name;
  string address;
};

void print(const Student &s)
{
   cout << s.roll << ' '
        << s.name << ' '
        << s.age  << ' '
        << s.address;
}

int main()
{
    Student a = {2323, 38, "Sandeep", "GFG"};
    print(a);
    return 0;
}