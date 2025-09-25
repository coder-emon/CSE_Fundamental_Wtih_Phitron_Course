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
        string s;
        cin >> n >> s;

        int cnt = 0;
        bool flag = true;
        for(int i = 0; i < n; i++){
            if(s[i] == '1')
                cnt++;
            else{
                if(cnt == 1 || cnt == 2){
                    flag = false;
                    break;
                }
                cnt = 0; 
            }
        }
        if(cnt == 1 || cnt == 2) flag = false;

        if(flag)
            cout << "Yes" <<nl;
        else
            cout << "No" << nl;
        
    }
    
    return 0;
}