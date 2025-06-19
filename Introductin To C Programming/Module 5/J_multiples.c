#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d", &a, &b);

    if(a < b){
        int c = a;
        a = b;
        b = c;
    }

    if(a % b == 0){
        printf("Multiples");
    }else{
        printf("No Multiples");
    }
return 0;
}