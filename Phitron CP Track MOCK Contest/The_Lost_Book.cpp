#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int books[n];
    for(int i = 0; i < n; i++){
        cin >> books[i];
    }
    int targetBookCode;
    cin >> targetBookCode;
    bool flag = false;
    int idx;
    for(int i = 0; i < n; i++){
        if(books[i] == targetBookCode){
            idx = i;
            flag = true;
        }
    }

    if(flag)
        cout << idx;
    else
        cout << -1;
    
    return 0;
}