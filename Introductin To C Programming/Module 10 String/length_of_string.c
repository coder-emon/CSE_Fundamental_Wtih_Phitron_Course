#include <stdio.h>
#include <string.h>
int main()
{
    char s[101];
    scanf("%s", s);
    int count = 0;
    for(int i = 0; s[i] != '\0'; i++){
        count++;
    }
    printf("%d", count);
    
    //Built Functions for stirng length
    int strSize = strlen(s);
    printf("%d", strSize);
return 0;
}