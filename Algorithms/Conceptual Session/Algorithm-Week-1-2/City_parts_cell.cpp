#include <bits/stdc++.h>
using namespace std;
char grid[105][105];
bool vis[105][105];
int cnt = 0;
vector<pair<int,int>> d = {{-1,0},{1,0},{0,-1},{0,1}};
int n,m;

bool valid(int i, int j){
    if(i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}

void dfs(int si, int sj){
    // cout << si << " " << sj << endl;
    cnt++;
    vis[si][sj] = true;

    for(int i = 0; i < 4; i++){
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if(valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] != '*'){
            dfs(ci,cj);
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


    vector<int> city_cell;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(!vis[i][j] && grid[i][j] == '.'){
                dfs(i,j);
                city_cell.push_back(cnt);
                cnt = 0;
            }
        }
    }

    for(int x : city_cell){
        cout << x << " ";
    }

    return 0;
}