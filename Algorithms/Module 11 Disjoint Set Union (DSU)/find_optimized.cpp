#include <bits/stdc++.h>
using namespace std;
int parent [105];
int find(int node)
{
    
    if(parent[node] == -1)
        return node;
    int leader = find(parent[node]);
    parent[node] = leader;
    return leader;
}

int main()
{
    memset(parent, -1, sizeof(parent));
    parent[0] = 1;
    parent[1] = -1;
    parent[2] = 1;
    parent[3] = 1;
    parent[4] = 5;
    parent[5] = 3;
    
    find(4);

    for(int i = 0;i < 6; i++){
        cout << i << " -> " << parent[i] << endl;
    }
    
    return 0;
}