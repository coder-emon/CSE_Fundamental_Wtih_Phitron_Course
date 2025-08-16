#include <stdio.h>

void sum ()
{
    // void means no value return from the function
    int a, b;
    scanf("%d %d", &a, &b);
    int ans = a + a;
    printf("%d\n", ans);
    printf("Above the sum the two number");
    return;  // return this where it is called with no value;
    printf("Print after return this won't print"); 
}


int main()
{
    
    sum ();
    
return 0;
}