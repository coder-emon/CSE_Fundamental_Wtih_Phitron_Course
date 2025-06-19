#include <stdio.h>
int main()
{
    int x = 10;
    printf("%d\n", x);
    printf("%p\n", &x);

    int* ptr;
    ptr = &x;
    *ptr = 200;
    printf("%p\n", ptr);
    printf("%p\n", &ptr);
    printf("%d", *ptr);
return 0;
}