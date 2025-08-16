#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v = {10, 20, 30};
    list <int> l(v.begin(), v.end());


    cout << l.size() << endl;

    cout << l.max_size() << endl;

    // l.clear();
    
    if(l.empty()){
        cout << "List is empty" << endl;
    }else{
        cout << "List is not empty" <<endl;
    }

    cout << l.size() << endl;
    l.resize(5, 9);

    for(int val : l){
        cout << val <<endl;
    }
    return 0;
}