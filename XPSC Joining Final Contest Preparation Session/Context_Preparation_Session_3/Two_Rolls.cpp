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
        int x,y;
        cin >> x >> y;

        bool flag = false;
        for(int i = 0; i <= 5; i++){
            int d1 = y+i;
            for(int j = 0; j <= 5; j++){
                int d2 = y+j;
                if(x + d1 + d2 == 50)
                    flag = true;
            }
        }

        if(flag)
            cout << "Yes" << nl;
        else
            cout << "No" << nl;
    }
    
    return 0;
}