#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector <int> v(n);
    
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    // vector <int> v;     //vector intialize with 0 size;

    // for(int i = 0; i < n; i++){
    //     int x;                      //if vector initialize without size that we have to take input with push_back() method;
    //     cin >> x;
    //     v.push_back(x);
    // }

    for(int c :v){
        cout << c << " ";
    }

    return 0;
}