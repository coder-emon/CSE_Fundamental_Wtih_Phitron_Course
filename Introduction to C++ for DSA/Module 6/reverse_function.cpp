#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    //array reverse using two pointers technique
    // for(int i = 0, j = n-1; i < j; i++, j--){
    //     int temp = a[i];
    //     a[i] = a[j];
    //     a[j] = temp;
    // }

    //array reverse using buit in function
    reverse(a, a+n);

    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }

    cout << endl;
    string s = "Hello World";
    reverse(s.begin(), s.end());

    cout << s << endl;




    return 0;
}