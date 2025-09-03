#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
bool vis[1005];
int level[1005];
vector<int> curr_level;

void bfs(int src, int l){
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;
    while(!q.empty()){
        int parent = q.front();
        q.pop();

        if(level[parent] == l)
            curr_level.push_back(parent);

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

    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));
    int l;
    cin >> l;
    bfs(0, l);
    sort(curr_level.begin(), curr_level.end(), greater<int>());
    for(int x:curr_level){
        cout << x << " ";
    }
    
    return 0;   
}