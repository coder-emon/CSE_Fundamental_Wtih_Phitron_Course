#include <stdio.h>
void hello(int i)
{
    
    printf("%d\n", i);
    if(i == 1) return;
    // i--;
    // hello(i-1); // aslo decrement when calling function with params
    hello(i -1);
}

int main()
{
    int n;
    scanf("%d", &n);
    hello(n);
return 0;
}