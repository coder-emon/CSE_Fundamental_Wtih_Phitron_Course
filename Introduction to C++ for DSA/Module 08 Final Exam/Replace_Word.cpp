#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        string s , x;
        cin >> s >> x;

        while(s.find(x) != string::npos){
            s.replace(s.find(x), x.size(), "#");
        }
        cout << s << endl;
    }
    return 0;
}