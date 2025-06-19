#include <stdio.h>

int char_to_ascii(char c)
{
    int char_int = c;
    return char_int;    
}

void char_ascci_2(char c)
{
    int char_int = c;
    printf("%d\n", char_int);
}

int char_ascci_3()
{
    char c = 'b';
    int char_int = c;
    return char_int;
}

void char_ascci_4()
{
    char c = 'm';
    int char_int = c;
    printf("%d\n", char_int);
}
int main()
{
    char c;
    scanf("%c", &c);
    int val = char_to_ascii(c);
    printf("%d\n", val);

    char_ascci_2(c);
    
    int val2 = char_ascci_3();
    printf("%d\n", val2);

    char_ascci_4();
return 0;
}