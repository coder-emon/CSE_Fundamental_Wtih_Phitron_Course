#include <stdio.h>
int main()
{
    //problem link
    //https://judge.phitron.io/topics/cm5z7wa3u0007p301xbzdqkuk/cm86cvm49008sr001t3j3mzp6?language=c_103
    int n;
    scanf("%d", &n);
        int count = 1;
    for(int i = 1; i <= n; i++){
        for(int i = 1; i <= count; i++){
        printf("%d ",i);
        }
        count++;
        printf("\n");
    }
    return 0;
}