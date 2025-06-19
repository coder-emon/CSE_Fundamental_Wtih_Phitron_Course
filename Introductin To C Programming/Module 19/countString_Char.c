#include <stdio.h>

int countChar(char s[], int i)
{
    if(s[i] == '\0'){
        return 0;
    }
    int cnt = countChar(s, i+1);
    return cnt + 1;
}

int main()
{
    char s[201];
    fgets(s, 201, stdin);

    int val = countChar(s, 0);
    printf("%d", val);
return 0;
}