#include <stdio.h>
#include <string.h>
int main()
{
    char a[101], b[101];
    scanf("%s %s", &a, &b);
    // int i = 0;
    // while(1){
    //     if(a[i] == '\0' && b[i] == '\0')
    //     {
    //         printf("Both are Equal");
    //         break;
    //     }
    //     else if(a[i] == '\0')
    //     {
    //         printf("A is Smaller");
    //         break;
    //     }
    //     else if(b[i] == '\0')
    //     {
    //         printf("B is Smaller");
    //         break;
    //     }
    //     else if(a[i] < b[i])
    //     {
    //         printf("A is Smaller");
    //         break;
    //     }
    //     else if(a[i] > b[i])
    //     {
    //         printf("B is Smaller");
    //         break;
    //     }
    //     else if(a[i] == b[i])
    //     {
    //         i++;
    //     }
    // }


    // string compare using built in function 
    int val = strcmp(a, b);
    if(val < 0){
        printf("A is Smaller");
    }else if(val == 0){
        printf("Both are Equal");
    }else if(val > 0){
        printf("B is Smaller");
    }
    return 0;
}