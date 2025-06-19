#include <stdio.h>

void printSum (int a[], int n, long long int* sum)
{
    if(n==0){
        return;
    }
    *sum = *sum + a[n-1];
    printSum(a, n-1, sum);
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    long long int sum = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    printSum(a, n, &sum);
    printf("%lld", sum);

return 0;
}