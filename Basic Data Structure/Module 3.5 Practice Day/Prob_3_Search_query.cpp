#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector <int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int q;
    cin >> q;
    for(int i = 0; i < q; i++){
        int num;
        cin >> num;
        int l = 0;
        int r = n -1;
        int is_found = 0;
            while(l <= r){
                int mid = (l+r)/2;
                if(v[mid] == num){
                    is_found = 1;
                    break;
                }else if(v[mid] > num){
                    r = mid -1;
                }else{
                    l = mid + 1;
                } 
            }
        if(is_found){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }

    }
    return 0;
}