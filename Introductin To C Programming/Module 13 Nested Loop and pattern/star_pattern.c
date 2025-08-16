#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int star =1;
    for(int i = 1; i <= n; i++){

        for(int j = 1; j <= star; j++){
            printf("*");
        }
        printf("\n");
        star++;
    }
    int hash =n;
    for(int i = 1; i <= n; i++){

        for(int j = 1; j <= hash; j++){
            printf("#");
        }
        printf("\n");
        hash--;
    }
return 0;
}