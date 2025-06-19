#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int star =2 *n -1;
    int space =0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= space; j++){
            printf(" ");
        }
        for(int j = 1; j <= star; j++){
            printf("*");
        }

        star-=2;
        space++;
        printf("\n");
    }
return 0;
}