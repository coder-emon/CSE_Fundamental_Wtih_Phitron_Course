#include <stdio.h>

void spacePrinter(space)
{
    for(int j = 1; j <= space; j++){
        printf(" ");
    }
}

void starPrinter(star)
{
    for(int j = 1; j <= star; j++){
        printf("*");
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int space = 0;
    int star = 2 * n - 1;
    for(int i = 1; i <= n; i++){

        spacePrinter(space);
        starPrinter(star);
        space++;
        star-=2;
        printf("\n");
    }
return 0;
}