#include <bits/stdc++.h>
using namespace std;
char grid[105][105];
bool vis[105][105];
vector<pair<int,int>> d = {{-1,0},{1,0},{0,-1},{0,1}};
int n,m;

bool valid(int i, int j){
    if(i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}

void dfs(int si, int sj){
    // cout << si << " " << sj << endl;
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
    
    int si, sj, di, dj;

    memset(vis, false, sizeof(vis));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(grid[i][j] == 'S'){
                si = i;
                sj = j;
            }
            if(grid[i][j] == 'E'){
                di = i;
                dj = j;
            }
        }
    }

    dfs(si, sj);

    // cout << si << " " << sj << " " << di << " " << dj << endl;
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < m; j++){
    //         cout << vis[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    if(vis[di][dj])
        cout << "Path Exist";
    else
        cout << "Path Not Exist";
    return 0;
}