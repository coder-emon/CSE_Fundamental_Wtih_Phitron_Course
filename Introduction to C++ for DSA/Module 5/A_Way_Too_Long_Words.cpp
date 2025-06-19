#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    while (n--){
        cin >> s;
        if(s.size() > 10){
            cout << *s.begin() << s.size() -2 << *(s.end() -1) << endl;
        }else{
            cout << s << endl;
        }
    }
    return 0;
}