#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n );
    char m[n+1];
    scanf("%s", m);
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += m[i] - '0';
    }

    printf("%d", sum);
  
return 0;
}