#include <stdio.h>
int main(){
    int tk = 120;
    scanf("%d", &tk);
    if(tk >= 100){
        printf("Berger Khabo");
    }else if(tk >= 50){
        printf("Fuska Khabo");
    }else{
        printf("Chips Khabo");
    }
}