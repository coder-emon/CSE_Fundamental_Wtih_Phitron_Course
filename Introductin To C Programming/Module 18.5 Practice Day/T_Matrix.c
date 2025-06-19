#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    int pDsum = 0;
    int sDsum = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j){
                pDsum = pDsum + a[i][j];
            }
            if(i + j == n -1){
                sDsum = sDsum + a[i][j];
            }
        }
    }
    int dSub = pDsum - sDsum;
    if(dSub < 0){
        dSub = -dSub; // or dSub * (-1)
    }
    printf("%d", dSub);
    
return 0;
}