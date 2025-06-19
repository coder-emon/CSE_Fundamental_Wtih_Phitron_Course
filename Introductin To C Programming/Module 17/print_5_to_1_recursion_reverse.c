#include <stdio.h>

void hello(int i)
{
    if(i == 6) 
    {
        return;
    }
    // i++;
    hello(i +1);
    printf("%d\n", i);
}

int main()
{
    int i = 1;
    hello(i);
return 0;
}