#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[100005];
bool vis[100005];
int level[100005];
int parent[100005];

void bfs(int src){
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 1;

    while(!q.empty()){
        int par = q.front();
        q.pop();

        for(auto child : adj_list[par]){
            if(!vis[child]){
                q.push(child);
                vis[child] = true;
                level[child] = level[par] + 1;
                parent[child] = par;
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    while(e--){
        int a,b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));
    memset(parent, -1, sizeof(parent));
    bfs(1);

    int src, dest;
    cin >> src >> dest;

    vector<int> path;
    int node = n;
    while(node != -1){
        path.push_back(node);
        node = parent[node];
    }
    reverse(path.begin(), path.end());
    if(level[n] != -1){
        cout << level[n] << endl;
        for(int x : path){
        cout << x << " ";
    }
    }else{
        cout << "IMPOSSIBLE";
    }
    return 0;   
}