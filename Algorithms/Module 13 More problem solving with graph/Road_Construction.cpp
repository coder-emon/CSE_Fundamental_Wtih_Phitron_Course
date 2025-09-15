#include <bits/stdc++.h>
using namespace std;

int parent[100005];
int group_size[100005];
int n;
int tComp;
int maxComp;
int find(int node){
    if(parent[node] == -1)
        return node;
    int leader = find(parent[node]);
    parent[node] = leader;
    return leader;
}

void dsu_union(int node1, int node2){
    int leader1 = find(node1);
    int leader2 = find(node2);
    if(leader1 == leader2)
        return;
    
    if(group_size[leader1] >= group_size[leader2]){
        parent[leader2] = leader1;
        group_size[leader1] += group_size[leader2];
        maxComp = max(group_size[leader1], maxComp);
    }else{
        parent[leader1] = leader2;
        group_size[leader2] += group_size[leader1];
        maxComp = max(group_size[leader2], maxComp);
    }
    tComp--;
}

int main()
{
    int q;
    cin >> n >> q;
    tComp = n;
    maxComp = 1;

    for(int i = 1; i <= n; i++){
        group_size[i] = 1;
        parent[i] = -1;
    }

    while(q--){
        int a,b;
        cin >> a >> b;
        dsu_union(a,b);
        cout << tComp << " " << maxComp << endl;
 
    }
    
    return 0;
}