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
        string v = "aeiou";
        string s = "";
        int cnt = 0;
        for(int i = 0; i < n; i++){
            s += v[cnt];
            cnt++;
            if(cnt == 5)
                cnt = 0;
        }
        sort(s.begin(), s.end());
        cout << s << nl;
    }
    
    return 0;
}