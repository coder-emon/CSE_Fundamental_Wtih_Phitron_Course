#include <bits/stdc++.h>
using namespace std;
int main()
{
    list <int> l;
    int num;
    while(1){
        cin >> num;
        if(num == -1){
            break;
        }
        l.push_back(num);
    }

    l.sort();
    l.unique();

    for(auto val: l){
        cout << val << " ";
    }

    return 0;
}