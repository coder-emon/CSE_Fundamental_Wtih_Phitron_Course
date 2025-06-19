#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int isPalindrome = 1;
    for(int i = 0 ; i < n /2 ; i++){
        if(a[i] != a[n -i -1] ){
            isPalindrome = 0;
            break;
        }
        
    }
    
    if(isPalindrome){
        printf("YES");
    }else{
        printf("NO");
    }

return 0;
}