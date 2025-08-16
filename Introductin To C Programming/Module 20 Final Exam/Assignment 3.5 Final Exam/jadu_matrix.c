#include <stdio.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);

    if(r != c){
        printf("NO");
        return 0;
    }

    int a[r][c];
    for(int i= 0; i < r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d", &a[i][j]);
        }
    }

    int isJaduMatrix = 1;

    for(int i= 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(i == j || i+j == r -1){
                if(a[i][j] != 1){
                    isJaduMatrix = 0;
                    break;
                }
            }else {
                if(a[i][j] != 0){
                    isJaduMatrix = 0;
                    break;
                }
            }
            
        }
    }

    if(isJaduMatrix == 1){
        printf("YES");
    }else{
        printf("NO");
    }

return 0;
}