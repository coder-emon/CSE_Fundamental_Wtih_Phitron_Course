#include <stdio.h>
#include <limits.h>
int maxNum(int a[], int n, int max)
{
   if(n == 0){
    return max;
   }

   int maxN = maxNum(a, n -1, max);
   if(maxN < a[n -1]){
    return maxN = a[n -1];
   }else{
    return maxN;
   }
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    int max = INT_MIN;
    int maxValue = maxNum(a, n, max);
    printf("%d", maxValue);
return 0;
}