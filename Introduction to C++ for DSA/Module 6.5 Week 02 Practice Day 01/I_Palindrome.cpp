#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string t = s;
    reverse(t.begin(), t.end());

    if(s == t){
        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}