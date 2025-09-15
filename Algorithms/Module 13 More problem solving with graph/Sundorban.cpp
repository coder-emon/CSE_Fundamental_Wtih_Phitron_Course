#include <bits/stdc++.h>
using namespace std;
int n;
char grid[35][35];
int vis[35][35];
int level[35][35];
vector<pair <int,int> > d; 

bool valid (int i, int j){
    if(i >= n || i < 0 || j >= n || j < 0)
        return false;
    return true;
}

void bfs(int si, int sj){
    queue<pair <int,int> > q;
    q.push({si,sj});
    vis[si][sj] = true;
    level[si][sj] = 0;
    
    while(!q.empty()){
        pair<int,int> par = q.front();
        q.pop();
        int par_i = par.first;
        int par_j = par.second;

        for(int i = 0; i < 4; i++){
            int ci = d[i].first + par_i;
            int cj = d[i].second + par_j;

            if(valid(ci,cj) && !vis[ci][cj] && grid[ci][cj] != 'T'){
                q.push({ci,cj});
                vis[ci][cj] = true;
                level[ci][cj] = level[par_i][par_j] + 1;
            }
        }
    }

}

int main()
{
    d.push_back({-1,0});
    d.push_back({1,0});
    d.push_back({0,-1});
    d.push_back({0,1});
    int si,sj,di,dj;
    
    while(cin >> n){
        
        memset(vis, false, sizeof(vis));
        memset(level, -1, sizeof(level));

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> grid[i][j];
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

        
        bfs(si,sj);

        cout << level[di][dj] <<endl;

    }
    return 0;
}