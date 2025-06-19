#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i=0,sum = 0;
    while(i<n)      //time complexity   O(N*N);
    {
        int j=0;
        while(j<n)
        {
            sum += j;
            j+=2;
        }
        i++;
    }

    cout << sum << endl;

    return 0;
}