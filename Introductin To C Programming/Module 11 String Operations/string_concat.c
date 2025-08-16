#include <stdio.h>
#include <string.h>
int main()
{
    char a[101], b[101];
    scanf("%s %s", &a, &b);
    int lengthA = strlen(a);
    int lengthB = strlen(b);
    
    for(int i = 0; i <= lengthB; i++){
        a[lengthA + i] = b[i];
    }

    //String concat using built in function
    // strcat(b, a);

    printf("%s %s", a, b);
return 0;
}