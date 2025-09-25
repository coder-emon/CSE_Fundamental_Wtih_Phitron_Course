#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;


bool reachLeapy(ll n){
    if(n < 3 || n == 5)
        return false;
    return true;
}
bool reachJump(ll n){
   if(n < 3 || n == 4 || n == 7)
        return false;
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    bool flagLeapy;
    bool flagJumpster;

    int tc;
    cin >> tc;
    while(tc--){
        ll n;
        cin >> n;
        
        flagLeapy = reachLeapy(n);
        flagJumpster = reachJump(n);
        if(flagLeapy == true && flagJumpster == true)
            cout << "Both" << nl;
        else if(flagLeapy == true)
            cout << "Leapy" << nl;
        else if(flagJumpster == true)
            cout << "Jumpster" << nl;
        else
            cout << "None" << nl;
    }
    
    return 0;
}