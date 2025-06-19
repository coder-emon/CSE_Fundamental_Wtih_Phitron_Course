#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
   for(int i = 0; i < n; i++){
    char s[51], t[51];
    scanf("%s %s", s, t);
    int len_s = strlen(s);
    int len_t = strlen(t);
    for(int i = 0; s[i] != '\0' || t[i] != '\0'; i++){
        if(i < len_s){
            printf("%c", s[i]);
        }
        if(i < len_t){
            printf("%c", t[i]);
        }
    }
    printf("\n");
   }
return 0;
}