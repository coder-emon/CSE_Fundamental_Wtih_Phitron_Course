#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        char s[10001];
        scanf("%s", s);
        int length = strlen(s);
        int count_C = 0, count_S = 0, count_D = 0;
        for(int i = 0; i < length; i++){
            if(s[i] >= 'A' && s[i] <= 'Z'){
                count_C++;
            }
            else if(s[i] >= 'a' && s[i] <= 'z'){
                count_S++;
            }
            else if(s[i] >= '0' && s[i] <= '9'){
                count_D++;
            }
        }
        printf("%d %d %d\n", count_C, count_S, count_D);
    }
return 0;
}