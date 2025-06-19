#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int space = 5+ ((n +1) /2) -1;
    for(int i = 1; i < 5 +i -1; i+=2){
        for(int j = 0; i < space; j++){
            printf(" ");
        }
        for(int j = 1; j <=n; j++){
            printf("*");
        }
        space--;
        printf("\n");
    }
    
    for(int i = 1; i < 5; i+=2){

        for(int j = 0; i < 5; j++){
            printf(" ");
        }

        for(int j = 1; j <=n; j++){
            printf("*");
        }

        printf("\n");
    }
return 0;
}