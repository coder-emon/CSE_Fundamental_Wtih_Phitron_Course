#include <stdio.h>

void printNums(int n)
{
    for(int i = 1; i <= n; i++){
        printf("%d", i);
        if(i < n){
            printf(" ");
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    printNums(n);
return 0;
}