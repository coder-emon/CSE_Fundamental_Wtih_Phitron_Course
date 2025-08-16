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


    
    int isScaler = 1;
    int count =0;
    int fisrtValue = a[0][0];
    if(r == c){
        for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(i == j){
                if(a[i][j] == fisrtValue){
                count++;
                }
            }else{
                if(a[i][j] != 0){
                isScaler = 0;
            }
            }
        }
    }
    }else{
        printf("This is not Scaler Matrix\n");
    }

    if(isScaler && count == r){
        printf("This is Scaler Matrix\n"); 
    }else{
        printf("This is not Scaler Matrix\n");
    }

   
return 0;
}