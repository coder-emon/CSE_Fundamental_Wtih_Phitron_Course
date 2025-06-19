#include <stdio.h>
int main()
{
    int tc;
    scanf("%d", &tc);

    for(int i = 1; i <= tc; i++){
        int x,y;
    scanf("%d %d", &x, &y);
    int sum = 0;
    if(x > y){
        int temp = x;
        x = y;
        y = temp;
    }

    for(int i = x +1; i < y; i++){
        if(i % 2 != 0){
            sum = sum + i;
        }
    }
    printf("%d\n", sum);
    }

    return 0;
}