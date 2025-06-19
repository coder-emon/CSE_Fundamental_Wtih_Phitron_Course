#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int min = 10000 +1;
    int idx = 0;
    for(int i = 0; i < n; i++){
        if(a[i] < min){
            min = a[i];
            idx = i +1;
        }
    }
    printf("%d %d", min, idx);
return 0;
}