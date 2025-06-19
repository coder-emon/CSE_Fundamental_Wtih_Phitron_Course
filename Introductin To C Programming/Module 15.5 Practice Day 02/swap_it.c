#include <stdio.h>

void swap_it(int* p, int* q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    swap_it(&x, &y);
    printf("%d %d", x, y);
return 0;
}