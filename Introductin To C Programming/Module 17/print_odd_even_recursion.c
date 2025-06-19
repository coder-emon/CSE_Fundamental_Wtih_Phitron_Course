#include <stdio.h>
void hello(int i)
{
    int n = 100;
    if(n % 2 == 0){
        if(i % 2 == 0){
            printf("%d\n", i); 
        }
    }else{
        if(i % 2 != 0){
            printf("%d\n", i); 
        }
    }
    if(i == n) return;
    i++;
    hello(i);
}

int main()
{
    int n;
    scanf("%d", &n);
    hello(n);
return 0;
}