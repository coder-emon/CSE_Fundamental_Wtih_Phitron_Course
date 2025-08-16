#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    while(q--){
       stack <int> st;
       string s;
       cin >> s;
       for(int i = 0; i < (int)s.size(); i++){
        if(st.empty())
            st.push(s[i]);
        else if(st.top() == '1' && s[i] == '0'){
            st.pop();
        }else if(st.top() == '0' && s[i] == '1'){
            st.pop();
        }else{
            st.push(s[i]);
        }
       }
       if(st.empty()){
        cout << "YES" <<endl;
       }else{
        cout << "NO" <<endl;
       }
    }
    return 0;
}