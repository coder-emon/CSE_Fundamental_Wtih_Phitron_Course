#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++){
        int n;
        scanf("%d", &n);
        long long int mul =1;
        for(int i = 1; i <= n; i++){
            mul = (long long int)mul * i;
        }
        printf("%lld\n", mul);
    }
return 0;
}