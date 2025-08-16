#include <bits/stdc++.h>
using namespace std;
int main()
{
    list <int> l = {10, 20, 30, 20, 80, 20, 90};
    list <int> l2;
    list <int> l3 = {7, 8, 9};
    vector <int> v = {6, 4, 1};

    // l2 = l;
    // l2.assign(l.begin(), l.end());


    // l.push_back(40);
    // l.push_back(50);
    // l.push_front(5);

    // l.pop_front();
    // l.pop_back();

    // l.insert(next(l.begin(), 2), 5);
    // l.insert(next(l.begin(), 4), l3.begin(), l3.end());
    // l.insert(next(l.begin(), 6), v.begin(), v.end());


    // l.erase(next(l.begin(),4));
    // l.erase(next(l.begin(), 2), next(l.begin(),5));

    replace(l.begin(), l.end(), 20, 100);

    auto it = find(l.begin(), l.end(), 300);

    if(it == l.end()){
        cout << "Not Found" << endl;
    }else{
        cout << "Found" << endl;
    }

    // cout << *next(l.begin(), 2) << endl; 
    // cout << l.size() <<endl;
    
    for(int val: l){
        cout << val << endl;
    }
    return 0;
}