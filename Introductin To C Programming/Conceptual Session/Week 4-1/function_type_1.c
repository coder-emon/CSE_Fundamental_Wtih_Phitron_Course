#include <stdio.h>
int sum_of_first_last_digit(int num)
{
    int first_digit = num % 10;
    int last_digit = num / 1000;
    int sum = first_digit + last_digit;
    return sum;
}
int main()
{
    int n;
    scanf("%d", &n);
    int result = sum_of_first_last_digit(n);
    printf("%d", result);
return 0;
}