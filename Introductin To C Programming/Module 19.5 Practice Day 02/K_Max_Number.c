#include <stdio.h>

int maxNum (int a[], int n)
{
    if(n == 0){
        return -1000000001;
    }
    int max = maxNum(a, n-1);
    if(a[n -1] > max){
        return max = a[n -1];
    }else{
        return max;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    
    int max = maxNum(a, n);
    printf("%d", max);
return 0;
}