#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int a, b, x;
        cin >> a >> b >> x;
        int diff = b - a;
        int yearNeed = diff/x;
        cout << yearNeed << endl;
    }
    return 0;
}