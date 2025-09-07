#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

    pq.push({5,7});
    pq.push({7,2});
    pq.push({10,1});

    cout << pq.top().first << " " << pq.top().second;
    return 0;
}