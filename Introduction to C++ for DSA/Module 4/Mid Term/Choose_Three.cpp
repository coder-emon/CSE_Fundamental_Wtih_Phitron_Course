#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin >> t;
   while(t--){
   int n, s;
   cin >> n >> s;
   int flag = 0;
   int a[n];
   for(int i = 0; i < n; i++){
        cin >> a[i];
   }

   for(int i = 0; i < n -2; i++){
        for(int j = i+1; j < n -1; j++){
            for(int k = j+1; k < n; k++){
                int sum = a[i] + a[j] + a[k];
                if(sum == s){
                    flag = 1;
                    break;
                }
            }
        }
        if(flag){
            break;
        }
    }
    if(flag){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    
   }
    return 0;
}