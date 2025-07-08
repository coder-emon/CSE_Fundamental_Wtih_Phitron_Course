#include <stdio.h>
int main(){
    int a =9;
    if(a % 2 == 0){
        printf("%d Even Number \n", a);
        if(a < 0){
            printf("%d Negative Number \n", a);
        }else{
            printf("%d Positive Number \n", a);
        }
    }else{
        printf("%d Odd Number \n", a);
        if(a < 0){
            printf("%d Negative Number \n", a);
        }else{
            printf("%d Positive Number \n", a);
        }
    }
}