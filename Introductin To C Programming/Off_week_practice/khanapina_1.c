#include <stdio.h>
int main()
{
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    int total = x + y + z;
    if(total >= 1000){
        printf("Three Kacchi");
    }
    else if(total >= 500){
        printf("One Large Pizza");
    }
    else if(total >= 250){
        printf("Three Small Burger");
    }
    else if(total >= 100){
        printf("Three Fuchka");
    }else{
        printf("Nothing");
    }
return 0;
}