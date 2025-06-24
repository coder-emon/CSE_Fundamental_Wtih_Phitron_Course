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
    vector <int> suf(v);
    vector <int> pre(v);
    suf[n-1] = v[n-1];
    pre[0] = v[0];

    int i = n -2;
    int j = 1;
    while(i >= 0 && j < n ){
        suf[i] = suf[i+1] + v[i];
        pre[j] = pre[j-1] + v[j];
        i--;
        j++;
    }

    //suffix sum
    for(int i = 0; i < n; i++){
        cout << suf[i] << " ";
    }

    cout << endl;

    // prefix sum 
    for(int i = 0; i < n; i++){
        cout << pre[i] << " ";
    }


    for(int i = 0; i < n; i++){
        if(suf[i] == pre[i]){
            cout << i << " ";
        }
    }
    return 0;
}