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

    int first_row = 0;
    int first_col = 0;

    for(int j = 0; j < r; j++){
        printf("%d ", a[first_row][j]);
    }
    printf("\n");
    for(int j = 0; j < c; j++){
        printf("%d ", a[j][first_col]);
    }

return 0;
}