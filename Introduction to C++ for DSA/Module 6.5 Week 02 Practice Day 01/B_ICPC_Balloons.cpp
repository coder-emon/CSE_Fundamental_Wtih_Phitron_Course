#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int fre[26] = {0};
        for(char c: s ){
            int value = c - 'A';
            fre[value]++;
        }

        int sum = 0;

        for(int f : fre){
            if(f > 0){
                if(f == 1){
                    sum += 2;
                }else if(f > 1){
                    sum += 2;
                    sum= sum + (f -1);
                }
            }
        }
        cout << sum << endl;
    }
    return 0;
}