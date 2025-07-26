#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue <string> q;
    int tc;
    cin >> tc;
    while(tc--){
        int cmd;
        string name;
        cin >>  cmd;
        if(cmd == 0){
            cin >> name;
            q.push(name);
        }else if(cmd == 1){
            if(q.empty())
                cout << "Invalid" << endl;
            else{
                cout << q.front() << endl;
                q.pop();
            }
        }
        
    }
    return 0;
}