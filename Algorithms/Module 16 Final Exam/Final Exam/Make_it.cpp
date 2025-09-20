#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int dp[100005];
bool reach(ll n){
    if(1 == n)
        return true;
    if(n < 1)
        return false;
    
    if(dp[n] != -1)
        return dp[n];
    bool l = false, r = false;
    if(n % 2 == 0){
        r = reach(n / 2);
    }
    if(n >= 4)
        l = reach(n -3);
    dp[n] = (l || r);
    return dp[n];
}

int main()
{
    memset(dp, -1, sizeof(dp));
    bool flag;
    int tc;
    cin >> tc;
    while(tc--){
        ll n;
        cin >> n;
        flag = reach(n);
        if(flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}