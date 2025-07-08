#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello World";
    string s2 = " of Programming";
    // s += s2;
    // s.append(s2);
    // s.append("\nThis is Emon howlader ");
    // s.push_back('A');
    // s += 'T';
    // s[0] = 'T';
    // s.pop_back();

    // s = "Hello";
    // s = s2;
    // s.assign("Emon");
    // s.erase(5, 3);
    // s.replace(5, 0, " Emon");
    s.insert(5, " Programming");
    cout << s << endl;
    return 0;
}