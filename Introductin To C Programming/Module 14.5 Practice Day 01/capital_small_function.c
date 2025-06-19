#include <stdio.h>

char capital_to_small(char c)
{
    char char_char = c + 32;
    return char_char;
}

void capital_to_small_2(char c)
{
    char char_char = c + 32;
    printf("%c\n", char_char);
}

char capital_to_small_3()
{
    char c = 'T';
    char char_char = c + 32;
    return char_char;
}

void capital_to_small_4()
{
    char c = 'S';
    char char_char = c + 32;
    printf("%c\n", char_char);
}
char main()
{
    char c;
    scanf("%c", &c);
    char val = capital_to_small(c);
    printf("%c\n", val);

    capital_to_small_2(c);
    
    char val2 = capital_to_small_3();
    printf("%c\n", val2);

    capital_to_small_4();
return 0;
}