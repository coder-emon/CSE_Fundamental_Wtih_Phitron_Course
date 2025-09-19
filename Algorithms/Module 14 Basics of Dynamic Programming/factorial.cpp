#include <bits/stdc++.h>
using namespace std;

long long int fact(int n){
    if(n == 1)
        return 1;
    return n * fact(n-1);

}


int main()
{
    long long int result = fact(25);
    cout << result;
    return 0;
}