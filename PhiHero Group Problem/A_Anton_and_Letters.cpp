#include <bits/stdc++.h>
using namespace std;
int main()
{
    char c[1001];
    int i = 0;
    int b[26] = {0};
    while (cin >> c[i]){
        
        if(c[i] >= 'a' && c[i] <= 'z'){
            int idx = c[i] - 'a';
            b[idx]++;
        }
        
        i++;
    }
    int count = 0;
    for(int i = 0; i < 26; i++){
        if(b[i] > 0){
            count++;
        }
    }
    
    cout << count;
    
    return 0;
}