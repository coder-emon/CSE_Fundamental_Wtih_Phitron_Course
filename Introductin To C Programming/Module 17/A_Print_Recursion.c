#include <stdio.h>

void printRecursion(int i)
{
    if(i == 0){
        return;
    }
    printf("I love Recursion\n");
    printRecursion(i -1);
}

int main()
{
    int n;
    scanf("%d", &n);
    printRecursion(n);
return 0;
}