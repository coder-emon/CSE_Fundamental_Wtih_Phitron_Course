#include <stdio.h>

char small_to_capital(char c)
{
    char char_char = c -32;
    return char_char;
}

void small_to_capital_2(char c)
{
    char char_char = c - 32;
    printf("%c\n", char_char);
}

char small_to_capital_3()
{
    char c = 'b';
    char char_char = c -32;
    return char_char;
}

void small_to_capital_4()
{
    char c = 'm';
    char char_char = c -32;
    printf("%c\n", char_char);
}
char main()
{
    char c;
    scanf("%c", &c);
    char val = small_to_capital(c);
    printf("%c\n", val);

    small_to_capital_2(c);
    
    char val2 = small_to_capital_3();
    printf("%c\n", val2);

    small_to_capital_4();
return 0;
}