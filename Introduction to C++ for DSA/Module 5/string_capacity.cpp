#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello World";

    // s.clear();
    s.resize(7, '*');
    s.resize(10, '*');

    if(s.empty() == true){
        cout << "Empty" << endl;
    }else{
        cout << "Not Empty" << endl;
    }

    //same as above statement
    // if(s.size() == 0){
    //     cout << "Empty" << endl;
    // }else{
    //     cout << "Not Empty" << endl;
    // }


    cout << s << endl;

    cout << s.size() << endl;
    cout << s.max_size() << endl;
    cout << s.capacity() << endl;
    return 0;
}