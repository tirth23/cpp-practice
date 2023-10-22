#include<iostream>
using namespace std;
int main()
{
    string name;
    cout << "Please enter your name \n";
    getline(cin,name);
    // cin >> name; Wrong approach, try giving full name
    cout << "Hi " << name << ", \n"
         << "Welcome to GfG";

    // int a = std::cin.get();       
    // //cin.get() same as one character input since cin doesn't take space, tab and enter as input
    // //we can take any character has input
    // std::cout << a;

    // char nam[20];
    // std::cin.getline(nam, 5, '$');
    // std::cout << nam;
    
    // std::string name;
    // getline(std::cin, name, '\n');           //take string with space
    // std::cout << name << std::endl;

    // std::string name;
    // std::cout << "Enter name: ";
    // std::getline(std::cin, name, '$');   
    // //will take i/p till $
    // std::cout << name;

    return 0;
}