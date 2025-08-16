#include <bits/stdc++.h>
using namespace std;

int *p;

void fun()
{
    int x = 10;  // static variable;
    p = &x;
    cout << "Fun > " << *p << endl; 
    return;
}
void fun2()
{
    int * x = new int;  // dynamic variable;
    *x = 10;
    p = x;
    cout << "Fun2 > " << *p << endl; 
    return;
}

int main()
{
    // int x = 20;
    // cout << x << endl;

    fun();
    cout << "Main > " << *p << endl << endl;
    fun2();
    cout << "Main fun2> " << *p << endl;

    // int * s = new int;
    // *s = 100;
    // cout << *s << endl;
    return 0;
}