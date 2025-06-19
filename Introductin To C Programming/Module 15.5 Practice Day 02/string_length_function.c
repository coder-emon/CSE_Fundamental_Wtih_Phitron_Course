#include <stdio.h>

int my_len(char s[])
{
    int count = 0;
    while(s[count] != '\0'){
        count++;
    }
    return count;
}

int main()
{
    char s[100];
    scanf("%s", s);
    int result = my_len(s);
    printf("%d", result);
return 0;
}