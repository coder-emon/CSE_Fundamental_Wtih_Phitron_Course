#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int tc;
    cin >> tc;
    while(tc--){
        ll left,right;
        cin >> left >> right;

        // ll leftSum = (left -1 )*left / 2;
        // ll rightSum = right*(right + 1) / 2;

        ll minVal = min(left, right);
        ll maxVal = max(left, right);

        ll leftSum = (minVal -1 )*minVal / 2;  //before left sum
        ll rightSum = maxVal*(maxVal + 1) / 2;

        ll sum = rightSum - leftSum;
        
        cout << sum << endl;

    }
    return 0;
}