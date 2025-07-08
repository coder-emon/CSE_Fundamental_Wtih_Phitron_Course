#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int min_num = INT_MAX;
    int max_num = INT_MIN;
    int min_idx = 0;
    int max_idx = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < min_num)
        {
            min_num = a[i];
            min_idx = i;
        }
        
        if (a[i] > max_num){
            max_num = a[i];
            max_idx = i;
        }
    }

    //Swap using temp variable
    // int temp = a[max_idx];
    // a[max_idx] = a[min_idx];
    // a[min_idx] = temp;

    //Manual Swap value by index wise assainment
    // a[max_idx] = min_num;
    // a[min_idx] = max_num;
    
    //Swap Function
    swap(a[max_idx], a[min_idx]);
    
    for (int i = 0; i < n; i++)
    {
        cout << a[i] <<" ";
    }

    return 0;
}