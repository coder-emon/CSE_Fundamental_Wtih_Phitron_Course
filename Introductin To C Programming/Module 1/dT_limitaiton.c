#include <stdio.h>

int main (){
    //int data type take value about 10^9 and max value(2^32)
    int a = 1234567890;
    //long long int data type take value about 10^18 and max value(2^64) 
    long long int b = 1234567890;
    // float data type take value about 8 digits to left and right
    float c = 245.12;
    double d = 34576443.4353346;

    printf("a=%d\nb=%lld\nc=%f \nd=%lf", a, b, c, d);
}