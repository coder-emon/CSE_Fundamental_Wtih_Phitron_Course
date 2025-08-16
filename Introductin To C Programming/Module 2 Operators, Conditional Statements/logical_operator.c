#include <stdio.h>
int main(){
    int a = 5;
    int b = 7;
    int c = 0;
    int d = a > b && b < c;
    int e = a < b && b < c;
    int f = a < b && b > c;
    int g = a < b && b < c;
    printf("%d %d %d %d\n", d, e, f, g );
    
    int h = a > b || b < c;
    int i = a < b || b < c;
    int j = a < b || b > c;
    int k = a < b || b < c;
    printf("%d %d %d %d\n", h, i, j, k );

    int m = !0;
    printf("%d", m);
}