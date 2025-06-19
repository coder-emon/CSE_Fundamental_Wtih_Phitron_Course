#include <stdio.h>
int main()
{
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    int total = x + y + z;
    if(total % 3 == 0){
        printf("Yes");
    }else{
        printf("No");
    }
return 0;
}