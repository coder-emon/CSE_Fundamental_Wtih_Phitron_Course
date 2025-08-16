#include <stdio.h>
int main(){
    for(int i = 1; i <= 20; i++){
    
        if(i == 10){
            break;
        }
        if(i % 2 == 0){
            printf("%d Even Number \n", i);
        }else{
            printf("%d odd Number \n", i);
        }
        
    }
}