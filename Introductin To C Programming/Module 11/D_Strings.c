#include <stdio.h>
#include <string.h>
int main()
{
    char a[11];
    char b[11];
    scanf("%s", a);
    scanf("%s", b);
    int sizeA = strlen(a);
    int sizeB = strlen(b);

    char concat[22];
    for(int i = 0; i <= sizeA; i++){
        concat[i] = a[i];
    }
    for(int i = 0; i <= sizeB; i++){
        concat[sizeA + i] = b[i];
    }
    printf("%d %d\n%s\n",sizeA, sizeB, concat);

    char temp = a[0];
    a[0]=b[0];
    b[0] = temp;
    
    printf("%s %s", a, b);
return 0;
}