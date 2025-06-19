#include <stdio.h>

void printN_To_1(int n, int j)
{
    if(j > n){
        return;
    }
    printN_To_1(n, j+1);
    if(j == 1){
        printf("%d",j );
    }else{
        printf("%d ",j );
    }
}
// void printN_To_1(int j)
// {
//     if(j == 0){
//         return;
//     }
//     printf("%d ",j );
//     printN_To_1(j-1);
// }

int main()
{
    int n;
    scanf("%d", &n);
    printN_To_1(n, 1);
return 0;
}