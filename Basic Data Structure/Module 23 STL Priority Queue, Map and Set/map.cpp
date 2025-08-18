#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> mp;
    mp["Rabbi"] = 5;
    mp["Karim"] = 6;
    mp["Saeem"] = 2;
    mp["Ruhul"] = 0;

    for(auto it = mp.begin(); it != mp.end(); it++){
        cout << it->first << " " << it->second << endl;
    }

    if(mp.count("Ruhul"))
        cout << "Ache";
    else
        cout << "Nai";
    return 0;
}