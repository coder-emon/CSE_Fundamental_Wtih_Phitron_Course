#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int sumF3 = (int)(s[0]-'0') + (int)(s[1] -'0') + (int)(s[2] - '0');
        int sumL3 = (int)(s[3]-'0') + (int)(s[4] -'0') + (int)(s[5] - '0');
        if(sumF3 == sumL3){
            cout << "YES";
        }else{
            cout << "NO";
        }
        cout << endl;
    }
    return 0;
}