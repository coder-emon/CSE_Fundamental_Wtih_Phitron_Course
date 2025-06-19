#include <bits/stdc++.h>
using namespace std;

class Employee {
    public:
    int id;
    Employee(int x) { id = x; }
};

int main()
{
    // string str = "Hello";
    // char ch = str[1];
    // cout << ch ;

    // Employee e(3);
    Employee e[3] = {Employee(1), Employee(2), Employee(3)};
    cout << e[1].id ;
    return 0;
}