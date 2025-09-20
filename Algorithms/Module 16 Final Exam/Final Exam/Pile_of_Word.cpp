#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--){
        string s1 ,s2;
        cin >> s1 >> s2;
        int fre1[26] = {0};
        int fre2[26] = {0};

        if(s1.size() != s2.size())
            cout << "NO" << endl;
        else{
            for(char c : s1)
                fre1[c - 'a']++;
            for(char c : s2)
                fre2[c - 'a']++;

            bool flag = true;
            for(int i = 0; i < 26; i++){
                if(fre1[i] != fre2[i])
                    flag = false;
            }
            if(flag)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}