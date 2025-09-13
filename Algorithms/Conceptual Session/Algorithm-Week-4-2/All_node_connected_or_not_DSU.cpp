#include <bits/stdc++.h>
using namespace std;
int parent [100005];
int group_size[100005];
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

    if(group_size[leader1] >= group_size[leader2]){
        parent[leader2] = leader1;
        group_size[leader1] += group_size[leader2]; 
    }else{
        parent[leader1] = leader2;
        group_size[leader2] += group_size[leader1];
    }
}

int main()
{
    // memset(parent, -1, sizeof(parent));
    // memset(group_size, 1, sizeof(group_size));
    
    for (int i = 0; i < 100005; i++)
    {
        parent[i] = -1;
        group_size[i] = 1;
    }

    int n,e;
    cin >> n >> e;
    
    while(e--){
        int a,b;
        cin >> a >> b;
        int leader1 = find(a);
        int leader2 = find(b);
        if(leader1 != leader2)
            dsu_union(a,b);
    }

    bool flag = true; ;

    for(int i = 2; i <= n; i++){
        int leader_1 = find(1);
        int leader_node = find(i);
        if(leader_1 != leader_node)
        {
            flag = false;
        }
    }

    if(flag)
        cout << "All Node are Connected" << endl;
    else
        cout << "Some Nodes are Disconnected" << endl;
    return 0;
}