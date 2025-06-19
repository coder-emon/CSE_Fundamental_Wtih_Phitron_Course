#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    // for(int i = 1; i <= n; i++){   // complexity O(N)
    //     if(n%i == 0){
    //         cout << i << " ";
    //     }
    // }

    // sqrt complexity 
    // i <= sqrt(n)  == i*i <= n  both are same  condition
    for(int i = 1; i <= sqrt(n); i++){   // complexity O(sqrt(N))
        if(n%i == 0){
            cout << i << " " << n/i << " ";
        }
    }


    return 0;
}