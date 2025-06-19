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


    
    int isUnit = 1;
    int unitCount =0;
    int scalerCount =0;
    int fisrtValue = a[0][0];
    if(r == c){
        for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(i == j){
                if(a[i][j] == fisrtValue){
                scalerCount++;
                }
                if(a[i][j] == 1){
                unitCount++;
                }
                
            }else{
                if(a[i][j] != 0){
                isUnit = 0;
            }
            }
        }
    }
    }else{
        printf("This is not Unit Matrix\n");
    }

    if(isUnit && unitCount == r){
        printf("This is Unit Matrix\n"); 
    }else{
        printf("This is not Unit Matrix\n");
        if(isUnit && scalerCount == r){
        printf("This is Scaler Matrix\n");
    }
    }

   
return 0;
}