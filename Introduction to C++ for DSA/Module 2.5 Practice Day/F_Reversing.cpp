#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    //just take and print reversed way
    // for(int i = 0; i < n; i++){
    //     cin >> a[i];
    // }
    // for(int i = n -1; i >= 0; i--){
    //     cout << a[i] << " ";
    // }


    //solving using swap function
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int i = 0;
    int j = n-1;
    while(i < j){
        swap(a[i], a[j]);
        i++;
        j--;
    }

    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }

    return 0;
}