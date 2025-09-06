#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--){
        int n;
        string s;
        cin >> n >> s;
        int cnt = 0;
        for(char c : s)
            if(c == '1')
                cnt++;
        int ans = 0;
        for(char c : s){
            if(c == '0')
                ans += cnt + 1;
            else
                ans += cnt - 1;
        }
        cout << ans << endl;

    }
    return 0;
}