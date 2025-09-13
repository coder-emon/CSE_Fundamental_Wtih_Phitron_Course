#include <bits/stdc++.h>
using namespace std;
int parent [1005];
int group_size[1005];
int find(int node)
{
    if(parent[node] == -1)
        return node;
    int leader = find(parent[node]);
    parent[node] = leader;
    return leader;
}

void dsu_union(int node1, int node2)
{
    int leader1 = find(node1);
    int leader2 = find(node2);

    if(group_size[leader1] > group_size[leader2]){
        parent[leader2] = leader1;
        group_size[leader1] += group_size[leader2]; 
    }else{
        parent[leader1] = leader2;
        group_size[leader2] += group_size[leader1];
    }
}

int main()
{
    memset(parent, -1, sizeof(parent));
    memset(group_size, 1, sizeof(group_size));
    
    int n,e;
    cin >> n >> e;
    bool cycle = false;
    while(e--){
        int a,b;
        cin >> a >> b;
        int leader1 = find(a);
        int leader2 = find(b);
        if(leader1 == leader2)
            cycle = true;
        else
            dsu_union(a,b);
    }

    if(cycle)
        cout << "Cycle Detected";
    else
        cout << "No Cycle Detected";
    
    return 0;
}