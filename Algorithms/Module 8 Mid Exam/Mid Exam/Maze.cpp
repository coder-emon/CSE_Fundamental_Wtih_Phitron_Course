#include<bits/stdc++.h>
using namespace std;
char grid[1005][1005];
bool vis[1005][1005];
pair<int,int> parent[1005][1005];
vector<pair<int,int>> d = {{0,1},{0,-1},{1,0},{-1,0}};
int n,m;

bool valid(int i, int j)
{
    if(i<0 || i>=n || j<0 || j>=m)
        return false;
    return true;
}

void bfs(int si, int sj)
{
    queue<pair<int,int>> q;
    q.push({si,sj});
    vis[si][sj] = true;
    parent[si][sj] = {-1, -1};
    while(!q.empty())
    {
        pair<int,int> par = q.front();
        q.pop();
        int par_i = par.first;
        int par_j = par.second;

        for(int i=0;i<4;i++)
        {
            int ci = par_i + d[i].first;
            int cj = par_j + d[i].second;
            if(valid(ci,cj) && !vis[ci][cj] && grid[ci][cj] !='#')
            {
                q.push({ci,cj});
                vis[ci][cj] = true;
                parent[ci][cj] = {par_i, par_j};
            }
        }
    }
}

int main()
{
    cin >> n >> m;
    int si = -1, sj = -1, di = -1, dj = -1;
    for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
            cin >> grid[i][j];
            if(grid[i][j] == 'R'){
                si = i;
                sj = j;
            }
            else if(grid[i][j] == 'D'){
                di = i;
                dj = j;
            }
        
       }
            
    }
        
    memset(vis,false,sizeof(vis));

    bfs(si,sj);

    if(vis[di][dj]){
        int node_i = di, node_j = dj;
        while(1){
            pair<int,int> par = parent[node_i][node_j];
            node_i = par.first;
            node_j = par.second;

            if(grid[node_i][node_j] == 'R'){
                break;
            }
            grid[node_i][node_j] = 'X';
        }
    }

    for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
            cout << grid[i][j];
       }
       cout << endl;
    }

    return 0;
}