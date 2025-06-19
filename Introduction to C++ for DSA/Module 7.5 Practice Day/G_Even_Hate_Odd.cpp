#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
            int n;
        cin >> n;
        int a[n];
        
        int oddCount = 0;
        int evenCount = 0;

        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] % 2 != 0){
                oddCount++;
            }else{
                evenCount++;
            }
        }
        
        if(oddCount == evenCount) {
            cout << "0" << endl;
        }else if(abs(oddCount - evenCount) % 2 != 0) {
            cout << "-1" << endl;
        }else {
            cout << abs(oddCount - evenCount) / 2 << endl;
        }
    }
    return 0;
}