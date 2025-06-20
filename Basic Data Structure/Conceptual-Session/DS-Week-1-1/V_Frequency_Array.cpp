#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    // inefficient way without frequency array
    // for(int i = 1; i <= m; i++){
    // int count = 0;
    // for(int j = 0; j < n; j++){
    //     if(a[j] == i){
    //         count++;
    //     }
    // }
    // cout << count << endl;
    // }

    //efficient way with frequency array
    int fre[100000+1] ={0};
    for(int i = 0; i < n; i++){
        fre[a[i]]++;
    }

    for(int i = 1; i <= m; i++){
        cout << fre[i] << endl;
    }
    return 0;
}