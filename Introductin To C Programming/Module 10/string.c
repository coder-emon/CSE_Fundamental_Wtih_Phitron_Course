#include <stdio.h>
int main()
{
    
    char s[4];
    for(int i = 0; i < 4; i++){
        scanf("%c", &s[i]);
    }

    for(int i = 0; i < 4; i++){
        printf("%c", s[i]);
    }
    
    return 0;
}