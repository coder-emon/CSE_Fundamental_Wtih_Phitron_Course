#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    priority_queue<int, vector<int>, greater<int>> mpq;

    ll t;
    cin >> t;
    while(t--){
        int q, x;
        cin >> q;
        if(q == 1){
            cin >> x;
            mpq.push(x);
        }else if(q == 2){
            if(mpq.empty()){
                cout << "empty" << nl;
            }else{
                cout << mpq.top() << nl;
                int minVal = mpq.top();
                 while(!mpq.empty() && mpq.top() == minVal){
                    mpq.pop();
                }
            }
        }
    }
       
    return 0;
}