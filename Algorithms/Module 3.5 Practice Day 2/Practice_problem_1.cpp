#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
bool vis[1005];
int cnt = 0;
void dfs(int src){
    // cout << src << " ";
    cnt++;
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
    int src_n;
    cin >> src_n;
    dfs(src_n);
    cout << cnt;
    return 0;
}