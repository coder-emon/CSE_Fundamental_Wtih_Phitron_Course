#include <bits/stdc++.h>
using namespace std;

int main() {
	int tc;
	cin >> tc;
    while(tc--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        //solve using vector
        // vector<int> v;
        // v.push_back(a[0]);
        
        // for(int i = 0; i < n; i++){
        //     if(v.back() % 2 == 0 && a[i] % 2 == 1)
        //         v.push_back(a[i]);
        //     if(v.back() % 2 == 1 && a[i] % 2 == 0)
        //         v.push_back(a[i]);
        // }
        
        // cout << v.size() << endl;
        
        //solve without using vector
        int cnt1 = 0, cnt2 = 0;
        bool flag = 0;
        for(int i = 0; i < n; i++)
        {
            if(a[i] % 2 == flag){
                cnt1++;
                flag = !flag;
            }
        }
        
        flag = 1;
        for(int i = 0; i < n; i++)
        {
            if(a[i] % 2 == flag){
                cnt2++;
                flag = !flag;
            }
        }
        
        int res = max(cnt1, cnt2);
        cout << res << endl;
    }

    return 0;
}
