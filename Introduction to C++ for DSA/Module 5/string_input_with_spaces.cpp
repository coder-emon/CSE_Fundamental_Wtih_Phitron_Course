#include <iostream>
#include <algorithm>

using namespace std;


int main()
{
  
   int x;
   cin >>  x;
   
   cout << x << endl;
   
   string s;
   
//   cin >> s;
   cin.ignore();
   getline(cin, s);
   
   
   cout << s << endl;
    
    return 0;
}