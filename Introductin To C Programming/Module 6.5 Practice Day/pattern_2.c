#include <stdio.h>
int main()
{
    //problem link
    //https://judge.phitron.io/topics/cm5z7wa3u0007p301xbzdqkuk/cm86d15s50092r001qeu2gb0t?language=c_103
    int n ;
    scanf("%d", &n);
        int count = n;
    for(int i = n; i >= 1; i--){
        for(int i = count; i >= 1; i--){
        printf("%d ",i);
        }
        count--;
        printf("\n");
    }
    return 0;
}