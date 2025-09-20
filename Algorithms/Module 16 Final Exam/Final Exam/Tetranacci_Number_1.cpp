#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll dp[35];
ll tetra(ll n){
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n == 2) return 1;
    if (n == 3) return 2;
    if(dp[n] != -1)
        return dp[n];
    dp[n] = tetra(n-1) + tetra(n-2) + tetra(n-3) + tetra(n-4);
    return dp[n];
}

int main()
{
    memset(dp, -1, sizeof(dp));

    ll n;
    cin >> n;
    cout << tetra(n);

    return 0;
}