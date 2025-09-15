#include <bits/stdc++.h>
using namespace std;
#define ll long long int

vector<pair<ll,ll>> adj_list[100005];
ll dis[100005];
ll parent[100005];

void dijkstra(ll src){
    priority_queue<pair<ll,ll>, vector<pair<ll,ll>>, greater<pair<int,int>>> q;
    q.push({0,src});
    dis[src] = 0;

    while(!q.empty()){
        auto par = q.top();
        q.pop();
        ll par_node = par.second;
        ll par_dis = par.first;

        for(auto child : adj_list[par_node]){
            ll child_node = child.first;
            ll child_dis = child.second;

            if(par_dis + child_dis< dis[child_node]){
                dis[child_node] = par_dis + child_dis;
                q.push({dis[child_node], child_node});
                parent[child_node] = par_node;
            }
        }
    }
}

int main()
{
    ll n,e;
    cin >> n >> e;
    while(e--){
        ll a,b,c;
        cin >> a >> b >> c;
        adj_list[a].push_back({b,c});
        adj_list[b].push_back({a,c});
    }

    for(ll i = 1; i <= n; i++){
        parent[i] = -1;
        dis[i] = LLONG_MAX;
    }

    dijkstra(1);

    if(dis[n] == LLONG_MAX)
        cout << -1 << endl;
    else{
        vector<ll> path;
        ll node_i = n;
        while(node_i != -1){
            path.push_back(node_i);
            node_i = parent[node_i];
        }
        reverse(path.begin(),path.end());
        for(int x : path)
            cout << x << " ";
    }
    return 0;
}