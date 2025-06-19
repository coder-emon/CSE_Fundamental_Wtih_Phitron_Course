#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    // for(int i = 0; i < n /2.0 ; i++){
    //     if(n % 2 != 0 && i == n/2){
    //     printf("%d",a[i]);
    //     }else{
    //     if(i == n/2.0 -1){
    //         printf("%d %d",a[i], a[n-1-i]);
    //     }else{
    //         printf("%d %d ",a[i], a[n-1-i]);
    //     }
    //     }
    // }


    // alternate easy way
    for(int i = 0, j = n -1; i < j; i++, j--){
        printf("%d %d", a[i], a[j]);
        if(i < n/2 -1){
            printf(" ");
        }
    }
    if(n % 2 != 0 ){
        printf(" %d", a[n/2]);
    }
    return 0;
}