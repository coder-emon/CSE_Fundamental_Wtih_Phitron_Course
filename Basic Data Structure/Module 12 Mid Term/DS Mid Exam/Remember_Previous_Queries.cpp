#include <bits/stdc++.h>
using namespace std;

void print_forward(list<int> l)
{
    cout << "L -> ";
    for (int val : l)
    {
        cout << val << " ";
    }
    cout << endl;
}

void print_backward(list<int> l)
{
    cout << "R -> ";
    l.reverse();
    for (int val : l)
    {
        cout << val << " ";
    }
    cout << endl;
}

int main()
{
    list <int> l;

    int q;
    cin >> q;
    while(q--){
        int x, v;
        cin >> x >> v;
        int sz = l.size();
        if(x == 0){
            l.push_front(v);
            print_forward(l);
            print_backward(l);
        }else if(x == 1){
            l.push_back(v);
            print_forward(l);
            print_backward(l);
        }else if (x == 2){
            if(v < sz){
                auto it = next(l.begin(), v);
                l.erase(it);
                print_forward(l);
                print_backward(l);
            }else{
                print_forward(l);
                print_backward(l);
            }
        }
    }
    
    return 0;
}