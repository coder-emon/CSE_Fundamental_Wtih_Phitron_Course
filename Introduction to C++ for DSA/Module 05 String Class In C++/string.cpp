#include <bits/stdc++.h>
using namespace std;
int main()
{
    // char s[100] = "Hello";
    // s[100] = "Emon"; //can't directly assain value;
    // strcpy(s, "Emon");

    // string s = "Emon";
    // s = "Emon Howlader";

    //comare two char string with strcmp() function
    // char s[100] = "Emon Howlader";
    // char s2[100] = "Emon";
    // if(strcmp(s, s2) == 0){
    //     cout << "Same" << endl;
    // }else{
    //     cout << "Not Same" << endl;
    // }

    // can directly compare two stirng
    string s = "Emon";
    string s2 = "Emon";
    if(s == s2){
        cout << "Same" << endl;
    }else{
        cout << "Not Same" << endl;
    }

    cout << s << endl;
    return 0;
}