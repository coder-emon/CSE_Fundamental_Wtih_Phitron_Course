#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<pair<int,ll>> adj_list[100005]; 
vector<ll> dis[100005];
int k;

void dijkstra(int src){
    priority_queue<pair<ll,int>, vector<pair<ll,int>>, greater<pair<ll,int>>> q;
    q.push({0, src});
    dis[src][0] = 0;

    while(!q.empty()){
        auto par = q.top();
        q.pop();
        int par_node = par.second;
        ll par_dis = par.first;

        if(dis[par_node][k-1] < par_dis)
            continue;

        for(auto child : adj_list[par_node]){
            int child_node = child.first;
            ll child_dis = child.second;

            if(par_dis + child_dis < dis[child_node][k-1]){
                dis[child_node][k-1] = par_dis + child_dis;
                q.push({dis[child_node][k-1],child_node});
                sort(dis[child_node].begin(), dis[child_node].end());
            }
        }
    }
}

int main()
{
    int n,e;
    cin >> n >> e >> k;
    while(e--){
        int a,b,c;
        cin >> a >> b >> c;
        adj_list[a].push_back({b,c});
        // adj_list[b].push_back({a,c});
    }

    for(int i = 1; i <= n; i++){
        dis[i].resize(k);
        for(int j = 0; j < k; j++){
            dis[i][j] = LLONG_MAX;
        }
    }

    dijkstra(1); 

    for(ll elem : dis[n])
        cout << elem << " ";

    return 0;
}