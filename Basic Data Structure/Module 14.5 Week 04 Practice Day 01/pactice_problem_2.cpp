#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack <int> st;
    queue <int> q;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        st.push(x);
    }

    int m;
    cin >> m;
    for(int i = 0; i < m; i++){
        int x;
        cin >> x;
        q.push(x);
    }

    int flag = 1;
    if(m == n){
        while(!st.empty() && !q.empty()){
            if(st.top() != q.front()){
                flag = 0;
                break;
            }
            st.pop();
            q.pop();
        }
    }else{
        flag = 0;
    }

    
    if(flag){
        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}