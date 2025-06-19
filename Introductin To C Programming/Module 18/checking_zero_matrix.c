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


    // // process 1 for checking zero matrix
    // int flag = 1;
    // for(int i = 0; i < r; i++){
    //     for(int j = 0; j < c; j++){
    //         if(a[i][j] != 0){
    //             flag = 0;
    //         }
    //     }
    // }
    
    // if(flag){
    //     printf("This is a Zero matrix");
    // }else{
    //     printf("This is not a Zero matrix");
    // }

    // process 2 for checking zero matrix
    int val = r * c;
    int count = 0;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(a[i][j] == 0){
                count++;
            }
        }
    }
    
    if(count == val){
        printf("This is a Zero matrix");
    }else{
        printf("This is not a Zero matrix");
    }
return 0;
}