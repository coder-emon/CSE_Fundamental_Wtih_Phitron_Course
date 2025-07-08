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

    int p_d_sum = 0;
    int s_d_sum = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j){
                p_d_sum =p_d_sum + a[i][j];
            }
            if (i + j == n -1){
                s_d_sum =s_d_sum + a[i][j];
            }
        }
    }

    int sub = p_d_sum - s_d_sum;
    if(sub < 0){
        sub = sub * (-1);
    }
    printf("%d", sub);
    

   
return 0;
}