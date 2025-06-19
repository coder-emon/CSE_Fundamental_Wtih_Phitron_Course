#include <stdio.h>

void printN_Num(int n, int j)
{
    if(j > n){
        return;
    }
    printf("%d\n",j );
    printN_Num(n, j+1);
}

int main()
{
    int n;
    scanf("%d", &n);
    printN_Num(n, 1);
return 0;
}