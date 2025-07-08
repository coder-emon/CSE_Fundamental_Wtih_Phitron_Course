#include <stdio.h>
int main(){
    for(int i = 1; i <=20; i+=1){
        printf("%d\n", i);
    }
    for(int i = 1; i <=20; i+=2){
        printf("%d\n", i);
    }
    for(int i = 2; i <=20; i+=2){
        printf("%d\n", i);
    }
    for(int i = 4; i <=40; i+=4){
        printf("%d\n", i);
    }
    for(int i = 7; i <=40; i =i +7){
        printf("%d\n", i);
    }
    for(int i = 8; i <=100; i = i *2){
        printf("%d\n", i);
    }
    for(int i = 100; i >= 1; i--){
        printf("%d\n", i);
    }
    for(int i = 100; i >= 2; i-=2){
        printf("%d\n", i);
    }
    
}