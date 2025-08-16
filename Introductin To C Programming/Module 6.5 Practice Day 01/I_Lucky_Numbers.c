#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a = n % 10;
    n /= 10;
    int b = n % 10;
    if(b > a){
        //variable value swaping by helping of another variable
        int rem = a;
        a = b;
        b = rem;
        //variable value swaping by addition and substraction method
        // a = a -b;
        // b = a +b;
        // a = b -a;
        //variable value swaping by Bitwise aor method
        // a = a ^ b;
        // b = a ^ b;
        // a = a ^ b;
    }
    if(a == 0 || b == 0){
        printf("YES");
    }
    else if(a % b == 0){
        printf("YES");
    }else{
        printf("NO");
    }
return 0;
}