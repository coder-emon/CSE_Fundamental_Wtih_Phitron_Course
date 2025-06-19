#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
  
   string s = "Hello Emon";
   
   for(int i = 0; i < s.size(); i++){
     
         cout << s[i] << endl;
       
   }
   
   //cout << *s.begin() << endl;
//   cout << *(s.end() -1)<< endl;

//string iterator

    for(string :: iterator it = s.begin(); it < s.end(); it++){
        
        cout << *it << endl;
    }
   
    return 0;
}