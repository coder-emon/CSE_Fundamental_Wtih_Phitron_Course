#include <stdio.h>

int sum (int num1, int num2)
{
    int ans = num1 + num2;
    
    return ans;
}
int sub (int num1, int num2)
{
    int ans = num1 - num2;
    
    return ans;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
   int val = sum (a, b);
   int val2 = sub (a, b);

    printf("%d %d", val, val2);
return 0;
}