#include <bits/stdc++.h>
using namespace std;

int n,m;
int area_cnt = 0;
char grid[1005][1005];
bool vis[1005][1005];
vector<pair<int,int>> d = {{0,1},{0,-1},{1,0},{-1,0}};

bool valid(int i, int j){
    return (i >= 0 && i < n && j >= 0 && j < m);
}

void dfs(int si, int sj){
    vis[si][sj] = true;
    area_cnt++;
    for(auto p : d){
        int ci = si + p.first;
        int cj = sj + p.second;
        if(valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == '.' ){
            dfs(ci, cj);
        }
    }
}

int main()
{
    cin >> n >> m;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> grid[i][j];
    
    memset(vis, false, sizeof(vis));
    int cnt = 0;
    int mn = INT_MAX;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(!vis[i][j] && grid[i][j] == '.'){
                dfs(i,j);
                mn = min(area_cnt, mn);
                area_cnt = 0;
                cnt++;
            }   
        }
    }
        
    if(cnt){
        cout << mn;
    }else{
        cout << "-1";
    }
 
    return 0;
}