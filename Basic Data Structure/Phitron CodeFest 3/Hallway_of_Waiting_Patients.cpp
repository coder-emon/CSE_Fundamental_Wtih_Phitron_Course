#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue <string> q;
    int n;
    cin >> n;
    while(n--){
        string op, name;
        cin >> op ;
        if(op == "ARRIVE"){
            cin >> name;
            q.push(name);
        }
        else if(op == "SERVE"){
            if(!q.empty())
                q.pop();
            else
                cout << "No patients" << endl;
        }else if(op == "FIRST"){
            if(!q.empty())
                cout << q.front() << endl;
            else
                cout << "No patients" << endl;
        }else if(op == "LAST"){
            if(!q.empty())
                cout << q.back() << endl;
            else
                cout << "No patients" << endl;
        }else if(op == "COUNT"){
            cout << q.size() << endl;
        }else if(op == "SHOW"){
            queue <string> temp = q;
            if(!temp.empty()){
                while (!temp.empty())
                {
                    cout << temp.front() << " ";
                    temp.pop();
                }
                cout << endl;
            }
            else
                cout << "No patients" << endl;
        }
    } 
    return 0;
}