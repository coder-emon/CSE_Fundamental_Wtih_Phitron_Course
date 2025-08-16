#include <bits/stdc++.h>
using namespace std;
int main()
{
    // list <int> l;
    // list <int> l(5);
    // list <int> l(5, 2);

    // list <int> l = {10, 20, 30, 40};
    // list <int> l2(l);

    int a[] = {20, 30, 40, 50};
    list <int> l2(a, a+4);

    // vector <int> v = {51, 30, 20, 43};
    // list <int> l2(v.begin(), v.end());

    // for(auto it = l.begin(); it != l.end(); it++){
    //     cout << *it << endl;
    // }

    for(int val: l2){
        cout << val << endl;
    }

    // cout << *l.begin() ;

    return 0;
}