#include <stdio.h>
int x =5;
//x is the global variable we can accesss x in all the functions
int sum (int num1, int num2)
{
    int z = 6;
    //this z is a block scope variable
    printf("%d %d\n", x, z);
   
 return 0;
}
int main()
{
   int y = 8;
    //this y is a block scope variable y is only accesable in the main function where it was declared
    printf("%d %d\n", x, y);

    if(1 > 0){
        int m = 10;
        // this m is also a block scope variable
    }
    // and if we declared a variable in the for lop or while scope this is also a block scope variable
    
return 0;
}