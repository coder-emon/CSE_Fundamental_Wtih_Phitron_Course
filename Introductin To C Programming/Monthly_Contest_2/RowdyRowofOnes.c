#include <stdio.h>
int main()
{
    int r,c;
    scanf("%d %d", &r, &c);
    int a[r][c];
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d", &a[i][j]);
        }
    }
    
    int cnt[101] = {0};
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(a[i][j] == 1){
                cnt[i]++;
            }
        }
    }
    int max = -1;
    int maxIdx = -1;
    for(int i = 0; i < r; i++){
        if(max < cnt[i]){
            max = cnt[i];
            maxIdx = i;
            if(cnt[i] == c){
                break;
            }
        }
    }
    printf("%d", maxIdx);
return 0;
}