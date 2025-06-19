#include <stdio.h>
#include <string.h>
int main()
{
    char a[101], b[101];
    scanf("%s %s", a, b);
    int length = strlen(b);
    for(int i = 0; i <= length; i++){
        a[i] = b[i];
    }

    //Built in function for string copy 
    // strcpy(a, b);
    printf("%s %s", a, b);
return 0;
}