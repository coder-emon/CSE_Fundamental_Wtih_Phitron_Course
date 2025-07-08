#include <stdio.h>
int main()
{
    int tc;
    scanf("%d", &tc);
    for(int i = 0; i < tc; i++){
        int m,n,d;
    scanf("%d %d %d", &m, &n, &d);
    int totalWork = m * d;
    int totalFarmers = m + n;
    int daysNeed = totalWork / totalFarmers;
    int daysReduced = d - daysNeed;

    printf("%d\n", daysReduced);
    }
return 0;
}