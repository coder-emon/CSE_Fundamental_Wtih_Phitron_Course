#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        char s[101];
        scanf("%s", s);
        int size = strlen(s);
        if(size <= 10){
            printf("%s\n", s);
        }else{
            printf("%c%d%c\n", s[0], size-2, s[size-1]);
        }
    }
    
    
return 0;
}