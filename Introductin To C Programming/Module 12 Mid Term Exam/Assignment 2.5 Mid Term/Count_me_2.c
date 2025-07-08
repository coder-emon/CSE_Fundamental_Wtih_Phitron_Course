#include <stdio.h>
#include <string.h>
int main()
{
    char s[100001];
    scanf("%s",s );
    int length = strlen(s);
    int cons_count = 0;
    for(int i = 0; i <length; i++){
        if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u'){
            cons_count++;
        }
    }
    printf("%d", cons_count);
return 0;
}