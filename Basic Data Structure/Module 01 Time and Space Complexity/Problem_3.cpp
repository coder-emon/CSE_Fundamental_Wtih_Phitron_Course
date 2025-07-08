#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {                  //time complexity    O(N*Sqrt(N));
        int j=0;
        while(j*j<n)
        {
            i+j;
            j++;
        }
    }

    return 0;
}