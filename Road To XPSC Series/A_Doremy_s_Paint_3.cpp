#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while(tc--){
        int n;
        cin >> n;
        map<int,int> mp;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin>> v[i];
            mp[v[i]]++;
        }
        
        if(mp.size() > 2)
            cout << "No" << nl;
        else{
            if(mp.size() == 2){
                vector<int> v;
                for(auto p : mp)
                    v.push_back(p.second);
                if(abs(v[0] - v[1]) > 1) cout <<  "No" << nl;
                else
                    cout << "Yes" << nl;
            }
            else
                cout << "Yes" << nl;
        }
    }
    
    return 0;
}