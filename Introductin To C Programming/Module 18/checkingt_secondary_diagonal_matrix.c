#include <stdio.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d", &a[i][j]);
        }
    }


    
    int isDiagonal = 1;
    int diagonalZero =0;

    if(r == c){
        for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(i + j == r - 1){
                if(a[i][j] == 0){
                diagonalZero++;
                }
            }else{
                if(a[i][j] != 0){
                isDiagonal = 0;
            }
            }
        }
    }
    }else{
        printf("This is not secondary diagonal Matrix\n");
    }


    if(isDiagonal){
        printf("This is Secondary diagonal Matrix\n");
        if(c == diagonalZero){
        printf("This is also a Zero Matrix");
    }
    }else{
        printf("This is not Secondary diagonal Matrix\n");
        if(c == diagonalZero){
        printf("This is a Zero Matrix");
    }
    }
   
return 0;
}