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
        int a,b;
        cin >> a >> b;

        //bruteforce way
        // int count = 0;
        // while(1){
        //     a--;
        //     b-=2;
        //     if(a < 0 || b < 0) break;
        //     count+=3;;
        // }
        // cout << count << nl;


        int water = b/2;
        int juice = 0;
        if(a >= water){
            juice = water * 3;
        }else{
            juice = a * 3;
        }

        //sortcut way
        // juice = min(a , b/2) * 3;

        cout << juice << nl;
    }
    
    
    return 0;
}