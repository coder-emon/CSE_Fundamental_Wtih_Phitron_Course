#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string word = "EGYPT";
    // while(s.find(word) != string::npos){
    //     int pos = s.find(word);
    //     s.replace(pos, 5, " ");
    // }

    // alternative way 
    while(1){
        if(s.find(word) != -1){
            int index = s.find(word);
            s.replace(index, 5, " ");
        }else{
            break;
        }
    }
    cout << s ;
    return 0;
}