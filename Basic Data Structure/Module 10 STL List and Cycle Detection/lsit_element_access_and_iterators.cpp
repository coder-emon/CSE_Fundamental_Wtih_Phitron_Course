#include <bits/stdc++.h>
using namespace std;
int main()
{
    list <int> l = {20, 30, 40, 10, 70, 50, 80};

    cout << l.front() << endl;
    cout << l.back() << endl;

    cout << *l.begin() << endl;
    

    cout << *next(l.begin(), 3);
    return 0;
}