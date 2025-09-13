#include <bits/stdc++.h>
#define ll long long int
 #define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
class Edge{
    public:
        int a,b,c;
        Edge(int a,int b,int c){
            this->a = a;
            this->b = b;
            this->c = c;
        }
};

int main()
{
    fastIO();
    int n,m;
    cin >> n >> m;
    vector<Edge> edge_list;
    ll pinf = 1e17;
    ll ninf = -1 * pinf;
    vector <ll> dis(n+1, pinf);
    dis[1] = 0;

    for(int i = 1; i <= m; i++){
        int a,b,x;
        cin >> a >> b >> x;
        x = x * -1;
        edge_list.push_back(Edge(a,b,x));
    }

    for(int i = 1; i < n; i++){
        for(auto [a, b, c] : edge_list){
            if(dis[a] == pinf) continue;
            dis[b] = min(dis[b], dis[a]+c); 
        }
    } 
    
    for(int i = 1; i <= n; i++){
        for(auto [a,b,c] : edge_list){
            if(dis[a] + c < dis[b])
                dis[b] = ninf;
        }
    }

    if(dis[n] == ninf)
        cout << "-1";
    else
        cout << dis[n] * -1;

    return 0;
}