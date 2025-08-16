#include <stdio.h>

// void scanf(int x)
// {
//     // code how take input with scanf
// }

// scanf is a function there we pass the reference of the variable for updating the input value store them in the meomory that's why we use & sign for taking input;
int main()
{
    int x;
    scanf("%d", &x);
    printf("%d", x);
return 0;
}