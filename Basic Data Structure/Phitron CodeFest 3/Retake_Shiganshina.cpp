#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector <int> s(n);
    for(int i = 0; i < n; i++){
        cin >> s[i];
    }

    int sum = 0;
    int result;
    for(int i = 0; i < n; i++){
        sum+=s[i];
        if(sum == k){
            result = s[i];
        }
    }
    cout << result;
    return 0;
}