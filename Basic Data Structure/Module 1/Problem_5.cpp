#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    for(int i=0;i*i<n;i++)      //time complexity O(Sqrt(N));k
    {
        sum += i;
    }


    for(int i=0;i<n;i++)
    {
        sum += i;
        i*=2;
    }

    return 0;
}