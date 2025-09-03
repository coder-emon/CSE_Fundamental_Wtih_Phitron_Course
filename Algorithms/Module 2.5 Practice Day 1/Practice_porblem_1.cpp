#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
bool vis[1005];
int level[1005];

void bfs(int src){
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;
    while(!q.empty()){
        int parent = q.front();
        q.pop();

        for(auto child : adj_list[parent]){
            if(!vis[child]){
                q.push(child);
                vis[child] = true;
                level[child] = level[parent] + 1;
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

    int tc;
    cin >> tc;
    while(tc--){
        int src, dest;
        cin >> src >> dest;
        memset(vis, false, sizeof(vis));
        memset(level, -1, sizeof(level));
        bfs(src);
        cout << level[dest] << endl;    
    }
    
    return 0;   
}