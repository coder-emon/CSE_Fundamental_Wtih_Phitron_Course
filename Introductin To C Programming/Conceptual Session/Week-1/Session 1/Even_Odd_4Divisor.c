#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    if(a % 2 == 0){
        printf("Even \n");
        if(a % 4 == 0){
            printf("Divisable by 4");
        }
    }else{
        printf("Odd");
    }
    return 0;
}