#include <stdio.h>

int sum ()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int ans = a + b;
    
    return ans;
}
int sub ()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int ans = a - b;
    
    return ans;
}

int main()
{
   
   int val = sum ();
   int val2 = sub ();

    printf("%d %d", val, val2);
return 0;
}