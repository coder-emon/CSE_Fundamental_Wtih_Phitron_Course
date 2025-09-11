#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc; 
    while(tc--){
        int a,b,c;
        cin >> a >> b >> c;
        int sum = a + b + c;
        if(sum % 3 == 0 && b <= sum / 3)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}