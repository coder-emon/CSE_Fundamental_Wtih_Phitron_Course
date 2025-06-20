#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--){
        int n;
        cin >> n;
        if(n <= 1){
            cout << "NO" << endl;
            continue;
        }
        int flag = 1;
        for(int i = 2; i * i <= n; i++){
            if(n % i == 0){
                flag = 0;
                break;
            }
        }
        if(flag == 1){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}