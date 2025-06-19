#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int m;
    scanf("%d", &m);
    int b[m];
    for(int i = 0; i < m; i++){
        scanf("%d", &b[i]);
    }

    int c[n+m];

    for(int i = 0; i < n; i++){
        c[i] = a[i];
    }

    for(int i = 0; i < m ; i++){
        c[i + n] = b[i];
    }
    
    for(int i = 0; i < m + n; i++){
    printf("%d\n", c[i]);
    }
     
return 0;
}