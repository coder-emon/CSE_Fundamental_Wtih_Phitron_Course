#include <stdio.h>

// void fun(int a[], int n)
// {
//     // a[2] =200;
//     for(int i = 0; i < n; i++){ 
//         scanf("%d", &a[i]);
//     }
// }

void fun2 (int b[], int m)
{
    for(int i = 0; i < m; i++){
        printf("%d\n", b[i]);
    }
}
int main()
{
    // int n;
    // scanf("%d", &n);
    // int a[n];
    
    // fun(a, n);
    // for(int i = 0; i < n; i++){
    //     printf("%d\n", a[i]);
    // }
    
    int m;
    scanf("%d", &m);
    int b[m];
    for(int i = 0; i < m; i++){ 
        scanf("%d", &b[i]);
    }
    fun2(b, m);
return 0;
}