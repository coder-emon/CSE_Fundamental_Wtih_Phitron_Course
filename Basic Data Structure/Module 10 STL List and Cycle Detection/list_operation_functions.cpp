#include <bits/stdc++.h>
using namespace std;
int main()
{
    list <int> l = {30, 20, 10, 40, 40, 60, 50, 20, 10, 70, 20};

    //remove all the matched value which pass on func parameter
    // l.remove(20);

    // l.sort();
    // l.sort(greater<int>());

    // remove all duplicate number if the list is sorted 
    // l.unique();

    l.reverse();


    for(int val: l){
        cout << val << endl;
    }
    return 0;
}