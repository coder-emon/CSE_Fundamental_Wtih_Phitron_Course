#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++){
        int x, y;
    scanf("%d %d", &x , &y);
    int sum = 0;
    if(x > y){
        //variable value swaping by helping of another variable
        int rem = x;
        x = y;
        y = rem;
        //variable value swaping by addition and substraction method
        // x = x -y;
        // y = x +y;
        // x = y -x;
        //variable value swaping by Bitwise xor method
        // x = x ^ y;
        // y = x ^ y;
        // x = x ^ y;
    }
    for(int i = x +1; i < y; i++){
        if(i % 2 != 0){
            sum = sum + i;
        }
    }
    printf("%d\n", sum);
    }
return 0;
}