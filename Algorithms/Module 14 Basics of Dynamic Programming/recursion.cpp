#include <bits/stdc++.h>
using namespace std;

int rec(int n){
    if(n > 5)
        return 0;
    int sum = rec(n+1);
    cout << sum << endl;
    return sum + n;
}

int main()
{
    int sum = rec(1);
    return 0;
}