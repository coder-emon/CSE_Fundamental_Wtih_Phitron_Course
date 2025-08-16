#include <bits/stdc++.h>
using namespace std;
int main()
{
    list <string> myPlaylist;

    string song;
    // while(cin >> song && song != "stop"){
    //     myPlaylist.push_back(song);
    // }
    while(cin >> song && song != "stop")myPlaylist.push_back(song);

    int q;
    cin >> q;
    auto current = myPlaylist.begin();
    while(q--){
        string cmd;
        cin >> cmd;
        if(cmd == "play"){
            string songName;
            cin >> songName;
            auto isFound = find(myPlaylist.begin(), myPlaylist.end(), songName);
            if(isFound != myPlaylist.end()){
                cout << "Playing " << *isFound << endl;
                current = isFound;
            }else{
                cout << "Not Found" << endl;
            }
        }else if(cmd == "right"){
            if(current != myPlaylist.end()){
                current = next(current);
                cout << "Playing " << *current << endl;
            }else{
                cout << "Not Found" <<endl;
            }
        }else if(cmd == "left"){
            
            // way 1 for left 
            // if (prev(current) != prev(myPlaylist.begin()))
            // {
            //     current = prev(current);
            //     cout << "playing " << *current << endl;
            // }
            // else
            // {
            //     cout << "Not Found" << endl;
            // }

            //way 2 for left
            if(current == myPlaylist.begin()){
                cout << "Not Found" <<endl;
            }else{
                current = prev(current);
                cout << "Playing " << *current << endl;
            }
        }
    }
    return 0;
}