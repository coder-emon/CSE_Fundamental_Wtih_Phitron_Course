#include <stdio.h>
int main()
{
    //problem link
    //https://judge.phitron.io/topics/cm5z7wa3u0007p301xbzdqkuk/cm86d8btu009er001s04tfa7u?language=c_103
    int n;
    scanf("%d", &n);
        int count = 1;
    for(int i = 1; i <= n; i++){
        for(int i = 1; i <= count; i++){
        printf("%c ", '@' + count);
        }
        count++;
        printf("\n");
    }
    return 0;
}