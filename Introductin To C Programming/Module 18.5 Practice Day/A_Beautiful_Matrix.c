#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[5][5];
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            scanf("%d", &a[i][j]);
        }
    }

    int r = 0;
    int c = 0;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(a[i][j] == 1){
                r = i;
                c = j;
            }
        }
    }

    int moves = abs(r -2) + abs(c -2);
    
    printf("%d", moves);
    
return 0;
}