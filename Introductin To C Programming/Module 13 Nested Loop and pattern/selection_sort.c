#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 1; i <= n; i++){
        scanf("%d", &a[i]);
    }
    //ascending order sorting
    for(int i = 1; i <= n; i++ ){
        for(int j = i +1; j <= n; j++){
            if(a[i] > a[j]){
                int swap = a[i];
                a[i] = a[j];
                a[j] = swap;
            }
        }
    }
    
    for(int i = 1; i <= n; i++){
        printf("%d ", a[i]);
    }
return 0;
}