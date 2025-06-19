#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for(int i = 1; i < n; i*=2){  // complexity O(logN)
        cout << i << endl;
    }

    for(int i = n; i >= n; i/=2){  // complexity O(logN)
        cout << i << endl;
    }

    for(int i = 1; i < n; i++){  // complexity O(N)
        cout << i << endl;
        i*2; //complexity O(logN)
    }
    return 0;
}