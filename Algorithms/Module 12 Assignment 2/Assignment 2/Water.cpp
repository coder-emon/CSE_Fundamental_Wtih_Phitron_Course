#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--){
        int n;
        cin >> n;
        vector<int> wh(n);

        for(int i = 0; i < n; i++){
            cin >> wh[i];
        }

        int left = 0, right = n -1;
        int maxHeight = 0;
        int idx1 = 0, idx2 = n -1;

        while(left < right){
            int wL_height = min(wh[left], wh[right]);

            if(wL_height > maxHeight){
                maxHeight = wL_height;
                idx1 = left;
                idx2 = right;
            }
            
            if(wh[left] < wh[right])left++;
            else right--;
        }

        cout << idx1 << " " << idx2 << endl;
    }
    return 0;
}