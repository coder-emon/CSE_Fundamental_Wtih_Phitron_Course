#include <stdio.h>
int main()
{
    int mul =0;
    for(int i = 1; 8 * i <= 200; i++)
    {
        mul = 8 * i;
        printf("8 * %d, = %d\n", i, mul);
    }
}