#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int count_2 = 0, count_3 = 0;

    for(int i = 0; i < n; i++){
        if(a[i] % 2 == 0 && a[i] %3 == 0){
            count_2++;
        }else if(a[i] %3 == 0){
            count_3++;
        }else if(a[i] % 2 == 0){
            count_2++;
        }
    }
    printf("%d %d", count_2, count_3);
return 0;
}