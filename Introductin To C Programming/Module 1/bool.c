#include <stdio.h>
#include <stdbool.h>

int main(){
    bool isPassed;
    isPassed = true;
    // there is no format specifier for boolean data types in c if the data is true then output shows 1 otherwise shows 0
    printf("%d", isPassed);
}