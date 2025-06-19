#include <stdio.h>
void fun(int x)
{
     x = 20;
}
int main()
{
    int x;
    scanf("%d", &x);
    fun(x);
    printf("%d", x);
return 0;
}