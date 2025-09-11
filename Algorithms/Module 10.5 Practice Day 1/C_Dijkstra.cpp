#include <bits/stdc++.h>
#define ll long long int
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

const ll inf = 1e17;
vector<pair<int,int>> adj_list[100005]; 
ll dis[100005];
int parent[100005];

void dijkstra(int src){
    priority_queue<pair<ll,int>, vector<pair<ll,int>>, greater<pair<ll,int>>> q;
    q.push({0, src});
    dis[src] = 0;
    
    while(!q.empty()){
        auto par = q.top();
        q.pop();
        int par_node = par.second;
        ll par_dis = par.first;

        for(auto child : adj_list[par_node]){
            int child_node = child.first;
            ll child_dis = child.second;

            if(par_dis + child_dis < dis[child_node]){
                dis[child_node] = par_dis + child_dis;
                parent[child_node] = par_node;
                q.push({dis[child_node],child_node});
            }
        }
    }
}

int main()
{
    fastIO();
    int n,e;
    cin >> n >> e;
    while(e--){
        ll a,b,c;
        cin >> a >> b >> c;
        adj_list[a].push_back({b,c});
        adj_list[b].push_back({a,c});
    }
    memset(parent, -1, sizeof(parent));

    for(int i = 1; i <= n; i++){
        dis[i] = inf;
    }
    dis[1] = 0;
    dijkstra(1);
    vector<int> ans;
    int node = n;
    while(node != -1){
        ans.push_back(node);
        node = parent[node];
    }
    reverse(ans.begin(),ans.end());
    if(parent[n] != -1){
        for(int i = 0; i < ans.size(); i++)
            cout << ans[i] << " ";
    }else{
        cout << "-1";
    }

    return 0;
}