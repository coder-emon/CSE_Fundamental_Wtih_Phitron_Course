#include <stdio.h>

int logTwo(long long int n, long long int i, int c)
{
    if(i * 2 > n){
        return c;
    }
    c++;
    int val = logTwo(n, i *2, c);
    return val;
}

int main()
{
    long long int n;
    scanf("%lld", &n);
    int result = logTwo(n, 1, 0);
    printf("%d", result);
return 0;
}