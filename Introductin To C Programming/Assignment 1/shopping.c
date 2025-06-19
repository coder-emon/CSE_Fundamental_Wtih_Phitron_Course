#include <stdio.h>
int main()
{
    int n;
    int rem = 0;
    scanf("%d", &n);
    if(n > 1000){
        printf("I will buy Punjabi\n");
        rem = n - 1000;
        if(rem >= 500){
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes");
        }
    }else{
        printf("Bad luck!");
    }
    return 0;
}