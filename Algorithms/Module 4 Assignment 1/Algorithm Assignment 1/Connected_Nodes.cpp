#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,e;
    cin >> n >> e;
    vector<int> adj_list[n];
    while(e--){
        int a,b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    int q;
    cin >> q;
    while(q--){
        int p;
        cin >> p;
        if(adj_list[p].empty()){
            cout << "-1";
        }else{
            sort(adj_list[p].begin(),adj_list[p].end(),greater<int>());
            for(int x : adj_list[p]){
            cout << x << " ";
            }
        }
        cout << endl;
    }
    return 0;
}