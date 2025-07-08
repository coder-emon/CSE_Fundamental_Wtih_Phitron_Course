#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int space = 5+ ((n +1) /2) -1;
    int star = 1;
    for(int i = 0; i <= 6 + ((n -1) /2 -1) ; i++){
        for(int j = 0; j < space; j++){
            printf(" ");
        }
        for(int j = 0; j < star ; j++){
            printf("*");
        }
        space--;
        star+=2;
        printf("\n");
    }
    
    for(int i = 0; i < 5; i++){

        for(int j = 0; j < 5; j++){
            printf(" ");
        }

        for(int j = 0; j <n; j++){
            printf("*");
        }

        printf("\n");
    }
return 0;
}