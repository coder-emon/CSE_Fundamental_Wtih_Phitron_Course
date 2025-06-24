#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector <int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int is_dupli = 0;

    for(int i = 0; i < n; i++){
        if(v[i] == v[i+1]){
            is_dupli = 1;
            break;
        }
    }

    if(is_dupli){
        cout << "Duplicate" << endl;
    }else{
        cout << "NO Duplicate" << endl;
    }

    return 0;
}