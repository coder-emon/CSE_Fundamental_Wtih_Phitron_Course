//https://www.spoj.com/problems/NAKANJ/

#include<bits/stdc++.h>
using namespace std;
char grid[105][105];
bool vis[105][105];
int level[105][105];
vector<pair<int,int>> d = {{2,-1},{2,1},{1,2},{-1,2},{-2,1},{-2,-1},{-1,-2},{1,-2}};
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
    while(!q.empty())
    {
        pair<int,int> par = q.front();
        q.pop();
        int par_i = par.first;
        int par_j = par.second;

        for(int i=0;i<8;i++)
        {
            int ci = par_i + d[i].first;
            int cj = par_j + d[i].second;
            if(valid(ci,cj) && !vis[ci][cj])
            {
                q.push({ci,cj});
                vis[ci][cj] = true;
                level[ci][cj] = level[par_i][par_j] + 1;
            }
        }
    }
}

int main()
{
    n = 8;
    m = 8;
    int tc;
    cin >> tc;
    while(tc--){
    string src, des; 
    cin >> src >> des; 
    int si,sj,di,dj;
    si = src[1] - '1';
    sj = src[0] - 'a';
    di = des[1] - '1';
    dj = des[0] - 'a';

    memset(vis,false,sizeof(vis));
    memset(level,-1,sizeof(level));

    bfs(si,sj);
    cout << level[di][dj] << endl;
    }

    return 0;
}