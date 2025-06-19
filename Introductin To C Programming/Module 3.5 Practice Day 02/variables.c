#include <stdio.h>
int main()
{
    int a;
    long long int b;
    double c;
    char d;
    scanf("%d", &a);
    scanf("%lld", &a);
    scanf("%lf", &c);
    scanf(" %c", &d);

    printf("%d\n", a);
    printf("%lld\n", b);
    printf("%.2lf\n", c);
    printf("%c\n", d);

    return 0;
}