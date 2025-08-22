#include <bits/stdc++.h>
using namespace std;


bool cmp(pair<string, int> l, pair<string, int> r){
    if(l.first == r.first)
        return l.second > r.second;
    return l.first < r.first;
}


int main()
{
    int n;
    cin >> n;
    vector <pair<string, int>> v;
    while(n--){
        cin.ignore();
        string name;
        int num;
        cin >> name >> num;
        v.push_back({name, num});
    }

    sort(v.begin(), v.end(), cmp);

    for(int i = 0;i < (int)v.size(); i++){
        cout << v[i].first << " " << v[i].second << endl;
    }
    return 0;
}