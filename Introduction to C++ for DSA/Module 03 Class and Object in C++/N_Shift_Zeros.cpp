#include <iostream>
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

    int idx = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            a[idx] = a[i];
            idx++;
        }
    }

    for (int i = idx; i < n; i++)
    {
        a[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] <<" ";
    }

    return 0;
}