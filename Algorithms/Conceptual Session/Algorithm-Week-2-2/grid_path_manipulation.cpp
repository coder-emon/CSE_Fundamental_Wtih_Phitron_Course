#include<bits/stdc++.h>
using namespace std;
char grid[105][105];
bool vis[105][105];
int level[105][105];
pair<int,int> parent[105][105];
vector<pair<int,int>> d = {{-1,0},{1,0},{0,-1},{0,1}};
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
    level[si][sj] = 0;
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
                level[ci][cj] = level[par_i][par_j] + 1;
                parent[ci][cj] = {par_i, par_j};
            }
        }
    }
}

int main()
{
    cin >> n >> m;
    int si,sj,di,dj;
    for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
            cin >> grid[i][j];
            if(grid[i][j] == 'A'){
                si = i;
                sj = j;
            }
            else if(grid[i][j] == 'B'){
                di = i;
                dj = j;
            }
        
       }
            
    }
        
    memset(vis,false,sizeof(vis));
    memset(level,-1,sizeof(level));

    bfs(si,sj);

    cout << level[di][dj] << endl;

    if(vis[di][dj]){
        int node_i = di, node_j = dj;
        while(1){
            pair<int,int> par = parent[node_i][node_j];
            node_i = par.first;
            node_j = par.second;

            if(grid[node_i][node_j] == 'A'){
                break;
            }
            grid[node_i][node_j] = 'o';
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