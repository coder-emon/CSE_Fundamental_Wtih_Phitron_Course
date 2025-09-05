#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
bool vis[1005];
vector<int> nodes_cnt;
int n_cnt = 0;
void dfs(int src){
    n_cnt++;
    vis[src] = true;
    for(int child : adj_list[src])
        if(!vis[child])  //this condition work as base case
            dfs(child);
}

int main()
{
    int n,e;
    cin >> n >> e;
    while(e--){
        int a,b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    memset(vis, false, sizeof(vis));
    for(int i = 0; i < n; i++){
        if(!vis[i]){
            dfs(i);
            nodes_cnt.push_back(n_cnt);
            n_cnt = 0;
        }
    }
    sort(nodes_cnt.begin(),nodes_cnt.end());
    for(int x : nodes_cnt){
        cout << x << " ";
    }
    return 0;
}