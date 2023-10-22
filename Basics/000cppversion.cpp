#include<iostream>
#include<climits>       //includes info about size & precision of datatypes
#include<cfloat>
#include<cstring>       //c function for string
#include<cctype>        //manipulating characters
#include<cstdlib>       //functions to convert c string to different datatypes
#include<math.h>        //math functions
#include<typeinfo>      //include function like typeid()
#include<bits/stdc++.h> //include all cpp libraries

// to know which c++ version is used

int main() {
    if (__cplusplus == 202002L) std::cout << "C++20\n";
    else if (__cplusplus == 201703L) std::cout << "C++17\n";
    else if (__cplusplus == 201402L) std::cout << "C++14\n";
    else if (__cplusplus == 201103L) std::cout << "C++11\n";
    else if (__cplusplus == 199711L) std::cout << "C++98\n";
    else std::cout << "pre-standard C++\n";
}