#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n+1];
    for(int i = 1; i <= n; i++){
        scanf("%d", &a[i]);
    }
    int b[100001] = {0};
    
    for(int i = 1; i <= n; i++){
        // int val = a[i];;
        b[a[i]]++;
    }
    for(int i = 1; i <= m; i++){
        printf("%d\n", b[i]);
    }
return 0;
}