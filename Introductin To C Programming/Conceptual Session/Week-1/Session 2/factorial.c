#include <stdio.h>
int main()
{
    int tc;
    scanf("%d", &tc);
    for(int i = 1; i<=tc; i++){
    int n;
    scanf("%d", &n);
    long long int fact = 1;
    for(int i = 1; i <=n; i++){
        fact = fact * i;
    }
    printf("%lld\n", fact);
    }

    return 0;
}