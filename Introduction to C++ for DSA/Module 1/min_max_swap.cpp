#include <bits/stdc++.h>
// #include <iostream>
// #include <algorithm>    
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;

    // min number manually
    // if(a < b)
    // {
    //     cout << a;
    // }else{
    //     cout << b;
    // }

    // cout << min(a, b) << endl;
    // cout << max(a, b) << endl;
    // cout << min ({2, 45, 45, 100, 25, 32}) << endl;
    // cout << max ({2, 45, 45, 100, 25, 32}) << endl;

    // int temp = a;
    // a = b;
    // b = temp;
    // cout << a << " " << b;
    
    swap(a, b);
    cout << a << " " << b;

}