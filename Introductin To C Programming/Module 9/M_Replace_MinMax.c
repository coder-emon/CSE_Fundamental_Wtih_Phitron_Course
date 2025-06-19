#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    
    // swaping array using two pointers technique

    int min = 10000 +1;
    int max = -10000 -1;
    int min_i;
    int max_i;

    for(int i = 0 ; i < n ; i++){
        if(a[i] > max){
            max = a[i];
            max_i = i;
        }
        if(a[i] < min){
            min = a[i];
            min_i = i;
        }
    }

    int temp = a[min_i];
        a[min_i] = a[max_i];
        a[max_i] = temp;
    

    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }

return 0;
}