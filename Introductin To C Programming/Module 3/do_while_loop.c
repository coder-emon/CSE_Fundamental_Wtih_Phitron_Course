#include <stdio.h>
int main(){
    int i = 1;
    do{
        printf("%d \n",i);
        i++;
    }while(i<= 10);
    int m = 100;
    do{
        printf("%d \n",m);
        m+=2;
    }while(m<= 10);
    for(int i =5; i>=10; i--){
        printf("%d",i);
    }
}