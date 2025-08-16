#include <stdio.h>
int main()
{
    char x;
    scanf("%c", &x);
    if(x == 'z'){
        printf("%c", x - 25);
    }else{
        printf("%c", x +1);
    }
return 0;
}