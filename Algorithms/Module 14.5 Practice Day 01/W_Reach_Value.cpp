#include <bits/stdc++.h>
using namespace std;
#define ll long long int
bool reach(ll n, ll m){
    if(m == n)
        return true;
    if(m > n)
        return false;
    return reach(n,m* 10) || reach(n, m * 20);
}

int main()
{
    bool flag;
    int tc;
    cin >> tc;
    while(tc--){
        ll n;
        cin >> n;
        flag = reach(n, 1);
        if(flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}