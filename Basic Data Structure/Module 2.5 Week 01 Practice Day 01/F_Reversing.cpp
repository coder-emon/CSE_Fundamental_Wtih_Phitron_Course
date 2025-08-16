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

    //reverse manually
    // int i = 0, j = n -1;
    // while(i < j){
    //     int temp = v[i];
    //     v[i] = v[j];
    //     v[j] = temp;
    //     i++;
    //     j--;
    // }

    //reverse using built in function
    reverse(v.begin(), v.end());

    for(int i = 0; i < n; i++){
        cout << v[i] << " ";
    }

    return 0;
}