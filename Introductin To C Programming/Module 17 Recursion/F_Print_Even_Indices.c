#include <stdio.h>

void printEvenIdices_Reverse(int a[], int n, int j)
{
    if(j == n){
        return;
    }
    printEvenIdices_Reverse(a, n, j+1);
     if(j == 0){
        if(j % 2 == 0){
        printf("%d",a[j]);
        }
     }else{
        if(j % 2 == 0){
        printf("%d ",a[j]);
        }
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
    printEvenIdices_Reverse(a, n, 0);
return 0;
}