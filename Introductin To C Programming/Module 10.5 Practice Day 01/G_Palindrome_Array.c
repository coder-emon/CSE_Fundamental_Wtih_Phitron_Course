#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int b[n];
    for(int i = 0; i < n; i++){
        b[i] = a[n -1 -i];
    }

    int isEqual = 1;
    for(int i = 0; i < n; i++){
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