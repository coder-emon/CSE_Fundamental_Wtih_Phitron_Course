#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    
    //Solve Manualy
    // for(int i = 1; i <= t; i++){
    //     int n; 
    //     cin >> n;
    //     cout << "Case " << i << ":" ;
    //     for(int i =1; i <= n; i++){
    //         if(n % i == 0){
    //             cout << " " << i ;
    //         }
    //     }
    //     cout << endl;
    // }

    //solve this problem using vector
    for(int i = 1; i <= t; i++){
        int n; 
        cin >> n;
        vector <int> v;
        
        for(int i =1; i <= n; i++){
            if(n % i == 0){
                v.push_back(i);
            }
        }

        cout << "Case " << i << ":" ;
        for(int i =0; i < v.size(); i++){
            cout << " " << v[i];
        }
        cout << endl;
    }
    return 0;
}