#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;

ll Range_sum(ll n){
    return ((n*(n+1))/2);
}

ll Sum (ll l, ll r){
    return Range_sum(r) - Range_sum(l-1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, q;
    cin >> n >> q;

    while(q--){
        ll l, r, x, y;
        cin >> l >> r;
        x = ((l+1) / 2);
        y = ((r+1) / 2);
        ll sum = (2 * Sum(x,y));
        if(l % 2 == 0)
            sum -= x;
        if(r % 2 != 0)
            sum -= y;

        cout << sum << nl;
        
    }
    
    return 0;
}