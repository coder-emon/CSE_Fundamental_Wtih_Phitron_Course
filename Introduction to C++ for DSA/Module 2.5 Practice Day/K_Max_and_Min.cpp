#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int maximum = 0;
    int minimum = 0;
    // for maximum 
    if(a >= b && a >= c){
        maximum = a;
    }else if(b >= a && b >= c){
        maximum = b;
    }else if(c >= a && c >= b){
        maximum = c;
    }
    //for minimum
    if(a <= b && a <= c){
        minimum = a;
    }else if(b <= a && b <= c){
        minimum = b;
    }else if(c <= a && c <= b){
        minimum = c;
    }

    cout << minimum << " " << maximum;
    return 0;
}