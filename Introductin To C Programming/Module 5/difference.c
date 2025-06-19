#include <stdio.h>
int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    long long int x = (long long int) a*b;
    long long int y = (long long int) c*d;
    long long int diff = (long long int)x -y;
    printf("Difference = %lld", diff);
return 0;
}