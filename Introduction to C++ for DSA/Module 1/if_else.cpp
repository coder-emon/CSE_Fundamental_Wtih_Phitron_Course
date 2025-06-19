#include <iostream>
using namespace std;
int main()
{
    int x = 6;
    cin >> x;
    if(x % 2 == 0){
        cout << "Even Number\n";
    }else{
        cout << "Odd Number\n";
    }
    return 0;
}