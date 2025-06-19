#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while(n--){
        string s,t;
        cin >> s >> t;
        int maxLength = max(s.size(), t.size());
        for(int i = 0; i < maxLength; i++){
            if(t.size() > s.size() && i >= s.size()){
                cout << t[i] ;
            }else if(s.size() > t.size() && i >= t.size()){
                cout << s[i];
            }else{
                cout << s[i] << t[i];
            }
        }
        cout << endl;
    }
    return 0;
}