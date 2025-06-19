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

    int last_row = r -1;
    int last_col = c -1;

    for(int j = 0; j < c; j++){
        printf("%d ", a[last_row][j]);
    }

    printf("\n");

    for(int j = 0; j < r; j++){
        printf("%d ", a[j][last_col]);
    }

return 0;
}