#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char n[101];
    scanf("%s", n);
    
    int oddSum = 0;
    int evenSum = 0;
    int length = strlen(n);
    for(int i = length-1; i >= 0; i--){
        int digit = n[i] - '0';

        if(i % 2 != 0){
            oddSum += digit;

        }else{
            evenSum += digit;
        }
    }
   

    int result = oddSum - evenSum;
    if(abs(result) % 11 == 0){
        printf("YES");
    }else{
        printf("NO");
    }
    
return 0;
}