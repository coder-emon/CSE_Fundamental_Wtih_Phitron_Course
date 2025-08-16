#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int x;
    scanf("%d", &x);
    for(int i = 0; i < n; i++){
        if(a[i] == x){
            printf("%d", i);
            break;
        }else if(i == n -1 && a[i] != x){
            printf("-1");
        }
    }
return 0;
}