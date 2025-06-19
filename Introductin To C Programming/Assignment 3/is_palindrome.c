#include <stdio.h>
#include <string.h>
int is_palindrome(char a[])
{
    int length = strlen(a);
    int isEqual = 1;
    char b[1001];
    for(int i = 0; i < length; i++){
        b[i] = a[length - i -1];
    }

    for(int i = 0; i < length; i++){
        if(a[i] != b[i]){
            isEqual = 0;
            break;
        }
    }
    return isEqual;
}

int main()
{
    char s[1001];
    scanf("%s", s);
    int result = is_palindrome(s);
    if(result == 1){
        printf("Palindrome");
    }else{
        printf("Not Palindrome");
    }
return 0;
}