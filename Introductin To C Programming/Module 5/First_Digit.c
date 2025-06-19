#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    //here we need first one digit that's why we divide / by 1000 here we add 000 after one because of our given number is 4 digit. if our given would be 3 digit then we had added 00 after one;

    //if we need the last one digit that time we have to use % operator
    int first_digit = x / 1000;

    if(first_digit % 2 == 0){
        printf("EVEN");
    }else{
        printf("ODD");
    }
return 0;
}