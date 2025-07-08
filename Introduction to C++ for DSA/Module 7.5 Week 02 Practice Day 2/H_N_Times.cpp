#include <bits/stdc++.h>
using namespace std;
void nTimes(int n, char c){
    if(n == 0){
        return;
    }
    cout << c << " ";
    nTimes(n-1, c);
}
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        char c;
        cin >> n >> c;
        nTimes(n, c);
        cout << endl;
    }
    return 0;
}