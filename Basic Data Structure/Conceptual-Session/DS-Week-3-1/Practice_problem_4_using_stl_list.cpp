#include <bits/stdc++.h>
using namespace std;

void print_forward(list<int> l)
{
    for (int val : l)
    {
        cout << val << " ";
    }
    cout << endl;
}

void print_backward(list<int> l)
{
    l.reverse();
    for (int val : l)
    {
        cout << val << " ";
    }
    cout << endl;
}

int main()
{
    list<int> l;

    int q;
    cin >> q;
    while (q--)
    {
        int sz = l.size();
        int x, v;
        cin >> x >> v;
        if (x < 0 || x > sz)
        {
            cout << "Invalid" << endl;
        }
        else if (x == 0)
        {
            l.push_front(v);
            print_forward(l);
            print_backward(l);  
        }
        else if (x == sz)
        {
        l.push_back(v);
            print_forward(l);
            print_backward(l);
        }
        else
        {
            auto it = next(l.begin(), x);
            l.insert(it, v);
            print_forward(l);
            print_backward(l);
        }
    }

    return 0;
}