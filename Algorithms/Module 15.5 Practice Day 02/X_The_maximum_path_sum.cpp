#include <bits/stdc++.h>
using namespace std;
int arr[15][15];
int dp[15][15];
int n,m;

int maxSum (int i, int j){
    if( i > n || j > m)
        return -1e9;
    
    if(i == n && j == m)
        return arr[i][j];
    
    if(dp[i][j] != INT_MIN)
        return dp[i][j];
    
    int d = maxSum(i + 1, j);
    int r = maxSum(i, j+1);
        
    return dp[i][j] = arr[i][j] + max(d,r);
    
}


int main()
{
    
    cin >>  n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> arr[i][j];
            dp[i][j] = INT_MIN;
        }
    }

    int sum = maxSum(1,1);
    cout << sum << endl;
    return 0;
}