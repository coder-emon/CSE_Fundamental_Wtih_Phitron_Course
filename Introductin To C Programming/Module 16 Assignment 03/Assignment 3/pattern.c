#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int space = n -1;
    int hash_hifen = 1;
    int sign = 1;
    for(int i = 0; i < n; i++){
        for(int j = 1; j <= space; j++){
            printf(" ");
        }
        for(int j = 1; j <= hash_hifen; j++){
            if(sign){
                printf("#");
            }else{
                printf("-");
            }
        }
        sign = !sign;
        space--;
        hash_hifen+=2;
        if(n == 1){
            break;
        }
        printf("\n");
    }
    space = 1;
    hash_hifen = 2 * (n -1) -1;
    for(int i = 0; i < n -1; i++){
        for(int j = 1; j <= space; j++){
            printf(" ");
        }
        for(int j = 1; j <= hash_hifen; j++){
            if(sign){
                printf("#");
            }else{
                printf("-");
            }
        }
        sign = !sign;
        space++;
        hash_hifen-=2;
        if(i == n -2){
            break;
        }
        printf("\n");
    }
return 0;
}