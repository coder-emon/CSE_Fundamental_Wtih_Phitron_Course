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
        while(n != 0){
            // if(n == 1 || n == 2){
            //     cnt += n;
            //     break;
            // }
            n = n / 2;
            cnt++;
        }
        cout << cnt << nl;   
    }
    
    return 0;
}