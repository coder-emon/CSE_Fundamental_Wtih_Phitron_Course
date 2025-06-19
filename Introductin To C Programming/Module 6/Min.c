#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    int num;
    int min =INT_MAX;
    scanf("%d", &n);
    for(int i =1; i <= n; i++){
        scanf("%d", &num);
        if(num < min){
            min = num;
        }
    }
    printf("%d", min);
return 0;
}