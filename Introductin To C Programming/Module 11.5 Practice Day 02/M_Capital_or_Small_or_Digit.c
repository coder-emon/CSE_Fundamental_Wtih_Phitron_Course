#include <stdio.h>
int main()
{
    char s;
    scanf("%c", &s);
    if(s >= 'A' && s <= 'Z'){
        printf("ALPHA\nIS CAPITAL");
    }
    else if(s >= 'a' && s <= 'z'){
        printf("ALPHA\nIS SMALL");
    }else if(s >= '0' && s <= '9'){
        printf("IS DIGIT");
    }
return 0;
}