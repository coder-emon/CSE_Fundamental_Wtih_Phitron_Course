#include <stdio.h>
int main()
{
    int a[5] = {5, 8, 7, 2, 6};
    printf("%p\n", a);
    *(a+2) = 20;
    for(int i = 0; i < 5; i++){
        printf("address of array %p\n", &a[i]);
    }
    for(int i = 0; i < 5; i++){
        printf("%d\n", a[i]);
    }
return 0;
}