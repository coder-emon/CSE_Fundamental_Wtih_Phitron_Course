#include <stdio.h>
#include <string.h>
void fun(char s[])
{
    printf("%s\n", s);
    printf("%d", strlen(s)); // if need length of char array or string
}

int main()
{
    // char s[10];
    // scanf("%s", s);
    char sen[1000];
    fgets(sen, sizeof(sen), stdin);
    fun(sen);
return 0;
}