#include <bits/stdc++.h>
using namespace std;
class Edge{
    public:
        int a,b,c;
        Edge(int a, int b, int c){
            this->a = a;
            this->b = b;
            this->c = c;
        }
};
vector<Edge> edge_list;
long long int dis[1005];
int n,e;
bool cycle;

void bellman_ford(){
    for(int i = 1; i < n ; i++){
     for(auto ed : edge_list){
        int a,b,c;
        a = ed.a;
        b = ed.b;
        c = ed.c;

        if(dis[a] != LLONG_MAX && dis[a]+ c < dis[b]){
            dis[b] = dis[a]+c;
        }
    }
   }

   cycle = false;

   for(auto ed : edge_list){
        int a,b,c;
        a = ed.a;
        b = ed.b;
        c = ed.c;

        if(dis[a] != LLONG_MAX && dis[a]+ c < dis[b]){
            cycle = true;
            break;
        }
    }

}

int main()
{
    
    cin >> n >> e;
    while(e--){
        int a,b,c;
        cin >> a >> b >> c;
        edge_list.push_back(Edge(a,b,c));
    }

    for(int i = 1; i <= n; i++)
        dis[i] = LLONG_MAX;
    
    int src, q;
    cin >> src >> q;
    dis[src] = 0;
    bellman_ford();

    if(cycle){
        cout << "Negative Cycle Detected" << endl;
        return 0;
    }else{
        while(q--){
        int dest;
        cin >> dest;
        if(dis[dest] == LLONG_MAX)
            cout << "Not Possible" <<endl;
        else
            cout <<  dis[dest] << endl;       
    }
    }
    return 0;
}