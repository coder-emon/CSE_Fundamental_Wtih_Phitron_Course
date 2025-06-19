#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        double num = stoi(s);
        
        double sRoot = sqrt(num);

        if((int)sRoot == sRoot)
        {
                int a, b;
                if(int(sRoot) <= 2){
                     a = (int)sRoot / 2;
                     b = (int)sRoot - a;
                }else{
                     a = (int)sRoot / 2 -1;
                     b = (int)sRoot - a;   
                }
                    // alternative of above if else
                    // a = (int)sRoot / 2;
                    // b = (int)sRoot - a;
                
                cout << a << " " << b << endl;
        }else{
            cout << "-1" << endl;
        }
    }
    return 0;
}