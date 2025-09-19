#include <bits/stdc++.h>
using namespace std;

void recur(int idx, string s){
    if(idx < 0)
        return;
    recur(idx -1, s);
    cout << s[idx] << " ";

}

int main()
{
    int tc;
    cin >> tc;
    while(tc--){
        string s;
        cin >> s;
        recur(s.size() -1, s);
        cout << endl;
    }
    return 0;
}