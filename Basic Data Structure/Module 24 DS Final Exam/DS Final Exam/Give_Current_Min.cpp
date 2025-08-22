#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    priority_queue <int, vector<int>, greater<int>> pq;
    for(int i = 0; i < n; i++){
        int val;
        cin >> val;
        pq.push(val);
    }
    int q;
    cin >> q;
    while(q--){
        int qv;
        cin >> qv;
        if(qv == 0){
            int x;
            cin >> x;
            pq.push(x);
            cout << pq.top() << endl;
        }else if(qv == 1){
            if (!pq.empty())
                cout << pq.top() << endl;
            else
                cout << "Empty" << endl;
        }  
        else if(qv == 2){
            if(!pq.empty()){
                pq.pop();
                if (!pq.empty())
                    cout << pq.top() << endl;
                else
                    cout << "Empty" << endl;
            }else
                cout << "Empty" << endl;
        }
    }
    return 0;
}