#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
    map<string, int> mp;
    int count = 0;
    string max_count_word;
        string sentence;
        getline(cin, sentence);
        stringstream ss(sentence);
        string word;
        while(ss >> word){
            mp[word]++;
            if(mp[word] > count){
                count = mp[word];
                max_count_word = word;
            }
        }
        cout << max_count_word << " " << count << endl;
    }
    return 0;
}