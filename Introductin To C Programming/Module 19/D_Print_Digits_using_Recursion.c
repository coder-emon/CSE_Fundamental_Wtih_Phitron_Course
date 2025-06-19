#include <stdio.h>

void printDigits(int n)
{
    if(n ==  0){
        return;
    }

    printDigits(n/10);
    int lastDigit = n % 10;
    printf("%d ", lastDigit);
}

int main()
{
    int tc;
    scanf("%d", &tc);
    for(int i = 0; i < tc; i++){
        int n;
        scanf("%d", &n);

        if(n == 0){
            printf("0");
        }{
            printDigits(n);
        }
        printf("\n");
    }
return 0;
}