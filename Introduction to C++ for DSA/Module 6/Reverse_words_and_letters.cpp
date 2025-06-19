#include <bits/stdc++.h>
using namespace std;

void reverseWord(stringstream &ss){
    string word;
    if(ss >> word){
        reverseWord(ss);
        reverse(word.begin(), word.end());
        cout << word << " ";
    }
}

int main()
{
    string s;
    getline(cin, s);

    stringstream ss(s);
    reverseWord(ss);
    return 0;
}