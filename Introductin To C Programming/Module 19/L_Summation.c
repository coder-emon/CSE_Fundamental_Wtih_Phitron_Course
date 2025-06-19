#include <stdio.h>
#include <limits.h>
long long int sum_Of_Array(int a[], int n)
{
   if(n == 0){
    return 0;
   }

   long long int sum = sum_Of_Array(a, n -1);
   return sum + a[n -1];
   
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    
    }
    long long int sum = sum_Of_Array(a, n);
    printf("%lld", sum);
return 0;
}