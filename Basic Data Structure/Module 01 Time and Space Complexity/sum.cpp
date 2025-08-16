#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    long long int sum = 0;

    // sum using for loop
    for(int i = 1; i <= n; i ++){
        sum += i;
    }

    //sum using formula
    // sum = (n*(n+1))/2;
    cout << sum;
    return 0;
}