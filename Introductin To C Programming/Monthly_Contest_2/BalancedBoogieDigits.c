#include <stdio.h>
int main()
{
    int l, r;
    scanf("%d %d", &l, &r);
    int found = 0;
    for(int i = l; i <= r; i++){
        int n = i;
        int even = 0, odd = 0;
        while(n > 0) {
            int digit = n % 10;
            if(digit % 2 == 0){
               even++; 
            } 
            else {
                odd++;
            }
            n /= 10;
        }
        if(even == odd){
            printf("%d\n", i);
            found = 1;
        }
    }
    if(!found){
        printf("-1");
    }
return 0;
}