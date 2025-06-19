#include <stdio.h>
#include <string.h>
int main()
{
    char s[1001];
    scanf("%s", s);
    int sizeX = strlen(s);
    int isPalindrome = 1;
    for(int i = 0; i < sizeX / 2; i++){
        if(s[i] != s[sizeX -i -1]){
            isPalindrome = 0;
            break;
        }
    }
    if(isPalindrome){
        printf("YES");
    }else{
        printf("NO");
    }
return 0;
}