#include <stdio.h>
#include <string.h>
int main()
{
    char s[101];
    scanf("%s", s);
    int length = strlen(s);
    if(s[0] == s[length-1]){
        printf("Yes");
    }else{
        printf("No");
    }
return 0;
}