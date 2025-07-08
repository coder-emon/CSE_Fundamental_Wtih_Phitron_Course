#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v;
    v.push_back(10);
    // cout << v.size() << endl;    //v.size()  time complexity O(1)
    cout << v.capacity() << endl;    
    v.push_back(20);
    cout << v.capacity() << endl;    
    v.push_back(30);
    cout << v.capacity() << endl;    
    v.push_back(40);
    cout << v.capacity() << endl;    //when we corss vector capacity then increase it capacity to double
    v.push_back(50);
    cout << v.capacity() << endl;    //v.capacity() time complexity O(1)
    //  //v.clear() just clear the size of the vector don't delete the memory, only clear the value.
    // v.clear();      //v.clear()  time complexity O(N)


    cout << v.empty() << endl;       //v.empty()  time complexity O(1);

    cout << v.size() << endl;
    cout << v[2] << endl;       


    v.resize(10, -1);       //v.resize()  time complexity  O(K); where K is the difference between new size and current size.
    cout << v.size() << endl;


    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }



    return 0;
}