#include <stdio.h>
#include <string.h>
int main()
{
    char a[11];
    char b[11];
    scanf("%s", a);
    scanf("%s", b);
    int sizeA = strlen(a);
    int sizeB = strlen(b);
    printf("%d %d\n%s%s\n",sizeA, sizeB, a, b);
    char temp = a[0];
    a[0]=b[0];
    b[0] = temp;
    printf("%s %s", a, b);
return 0;
}