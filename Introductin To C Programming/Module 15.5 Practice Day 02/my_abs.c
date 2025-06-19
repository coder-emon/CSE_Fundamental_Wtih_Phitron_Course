#include <stdio.h>

int my_abs(int n)
{
    int abs = n;
    if(n < 0){
        abs = n * (-1);
    }
    return abs;
}

int main()
{
    int n;
    scanf("%d", &n);
    int result = my_abs(n);
    printf("%d", result);
return 0;
}