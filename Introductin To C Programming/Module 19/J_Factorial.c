#include <stdio.h>

long long int factorials(int n)
{
    if(n == 1){
        return 1;
    }

    long long int mul = factorials(n -1);
    return n * mul;
}

int main()
{
    int n;
    scanf("%d", &n);
    long long int mulValue = factorials(n);
    printf("%lld", mulValue);
return 0;
}