#include <stdio.h>

void sum (int num1, int num2)
{
    // void means no value return from the function
    int ans = num1 + num2;
    printf("%d\n", ans);
    return;  // return this where it is called with no value;
    printf("Print after return this won't print");
}


int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    sum (a, b);
    printf("Hello");
return 0;
}