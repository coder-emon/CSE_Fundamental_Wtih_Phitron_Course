#include <stdio.h>

void printN (int n)
{
    if(n==0){
        return;
    }
    if(n==1){
        printf("%d", n);
    }else{
        printf("%d ", n);
    }
    printN(n-1);
}

int main()
{
    int n;
    scanf("%d", &n);
    printN(n);
return 0;
}