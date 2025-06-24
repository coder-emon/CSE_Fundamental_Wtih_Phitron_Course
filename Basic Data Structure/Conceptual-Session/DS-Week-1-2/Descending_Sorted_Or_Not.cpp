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
    vector <int> copy_v(v);
    sort(copy_v.begin(), copy_v.end(), greater<int>());

    int is_des_sorted = 1;
    for(int i = 0; i < n; i++){

        if(v[i] != copy_v[i]){
            is_des_sorted = 0;
        }
    }

    if(is_des_sorted){
        cout << "Descending Sorted" << endl;
    }else{
        cout << "Not Descending Sorted" << endl;
    }
    return 0;
}