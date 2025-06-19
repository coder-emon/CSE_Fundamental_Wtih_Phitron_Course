#include <stdio.h>
int main()
{
    int x = 10; //declare & initialization
    int a[5]; // declare then we get 5 garbase value from here
    int b[5] = {24, 45, 45, 54};
    int c[4] = {0}; //when we declare and intialize a some value on that array that time value of that array will be 0 and this is only work for fixed size arry not working in variable type array;

    for(int i = 0; i < 5 ; i++){
        printf("%d ", a[i]);
    }

    printf("\n");
    for(int i = 0; i < 5 ; i++){
        printf("%d ", b[i]);
    }

    printf("\n");
    for(int i = 0; i < 4 ; i++){
        printf("%d ", c[i]);
    }
return 0;
}