#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[5] = {3, 4, 5, 6, 8};
    cout << (long long int)&a[2] << " " << (long long int)&a[3];

    vector <int> v = {3, 6, 7, 8 , 9};
    v.push_back(5);
    // cout << (long long int)&v[4] << " " << (long long int)&v[5];

    // problem of arrry
    //fixed size
    //sequetial memory allocation (also this problem with vector)
    return 0;
}