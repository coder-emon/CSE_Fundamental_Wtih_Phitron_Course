#include <stdio.h>

void printPositiveN(int n)
{
    for(int i = n; i >= -n; i-- ){
        printf("%d\n", i);
    }
}

void printNegativeN(int n)
{
    for(int i = n; i <= -n; i++ ){
        printf("%d\n", i);
    }
}

void printNum(int n)
{
    if(n > 0){
        printPositiveN(n);
    }else{
        printNegativeN(n);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    
    printNum(n);
return 0;
}