#include <stdio.h>
int main(){
    //C Programming all code have to write here in this main function

    printf("Hello, World");
    printf("\nHello\n");
    printf("\tworld \n");
    printf("\tI am a programmer");

    // int dataType memory 4 bytes
    int num1 =15;
    num1 =25 ;

    // float dataType memory 4 bytes
    float f= 1.43 ;

    // character dataType memory 1 bytes
    char bio ='#';

    // format specifier  ---->>  int %d, float %f, char %c
    printf("\n%d", num1);
    printf("%f", f);
    printf("%c", bio);
    printf("%d %f %c", num1, f, bio);



    return 0;
}