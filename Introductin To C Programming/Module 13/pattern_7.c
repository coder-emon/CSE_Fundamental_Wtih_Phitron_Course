#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int star = 1;
    int space = n -1;
    for(int i = 1; i <= n; i++){    //for printing lines
        for(int j = 1; j <= space; j++){  //for printing spaces
            printf(" ");
        }
        for(int j = 1; j <= star; j++){   //for printing *
            printf("*");
        }
        printf("\n");
        star += 2;
        space--;
    }
    int star2 = 2 * n - 1;
    int space2 = 0;
    for(int i = 1; i <= n; i++){    //for printing lines
        for(int j = 1; j <= space2; j++){  //for printing spaces
            printf(" ");
        }
        for(int j = 1; j <= star2; j++){   //for printing *
            printf("*");
        }
        printf("\n");
        star2 -= 2;
        space2++;
    }
return 0;
}