#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    char a[1001];
    scanf("%s", a);
    char b[1001];
    int sizeB = strlen(a);
    for(int i = 0; i < sizeB; i++){
        b[i] = a[sizeB -1 -i];
    }

    int isEqual = 1;
    for(int i = 0; i < sizeB; i++){
        if(a[i] != b[i]){
            isEqual= 0;
            break;
        }
    }

    if(isEqual){
        printf("YES");
    }else{
        printf("NO");
    }
return 0;
}