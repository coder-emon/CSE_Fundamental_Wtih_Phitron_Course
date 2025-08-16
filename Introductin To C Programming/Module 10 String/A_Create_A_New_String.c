#include <stdio.h>
#include <string.h>
int main()
{
    char s[1001];
    char t[1001];
    scanf("%s", s);
    scanf("%s", t);
    int sizeX = strlen(s);
    int sizeT = strlen(t);
    printf("%d %d\n%s %s",sizeX, sizeT, s, t);
return 0;
}