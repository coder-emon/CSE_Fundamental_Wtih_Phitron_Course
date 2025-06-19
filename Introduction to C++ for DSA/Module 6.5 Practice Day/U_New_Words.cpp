#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int fre[26] = {0};
    for(char c : s){

        //without checking upper or lowercase we can convert all into lowercase and then store into frequency array
        // c = tolowe(c);
        if(c > 'Z'){
            int value = c -'a';
            fre[value]++;
        }else{
            int value = c -'A';
            fre[value]++;
        }
    }
    int minValue = 1000005;
    for(int i = 0; i < 26; i++ ){
        if(fre[i] > 0){
            if(i == 4 || i == 6 || i == 24 || i == 15 || i == 19){
                minValue = min(minValue, fre[i]);
            }
        }
    }
    cout << minValue;
    return 0;
}