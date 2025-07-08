#include <stdio.h>
int main()
{
    int tc;
    scanf("%d", &tc);
    for(int i = 1; i <= tc; i++){
        int n;
        scanf("%d", &n);
        int a[n];
        for(int i = 0; i < n; i++){
            scanf("%d", &a[i]);
        }

        int minSum = 1000000000;
        for(int i = 1; i < n; i++){
            for(int j = i+ 1; j <= n; j++){
                int sum = a[i -1] + a[j-1] + j -i;
                if(sum < minSum){
                    minSum = sum;
                }
            }
        }
        printf("%d\n", minSum);
    }
    
return 0;
}