#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n ;
    // for(int i = 0; i < n; i++){  // Complexity o(N*N)
    //     for(int j = 0; j < n; j++){
    //         cout << "Hello" << endl;
    //     }
    // }

    for(int i = 0; i < m; i++){  // Complexity o(m*N)
        for(int j = 0; j < n; j++){
            cout << "Hello" << endl;
        }
    }

    // for(int i = 0; i < n; i++){  // Complexity o(N*N*N)
    //     for(int j = 0; j < n; j++){
    //         for(int k = 0; k < n; k++){
    //         cout << "Hello" << endl;
    //         }
    //     }
    // }
    return 0;
}