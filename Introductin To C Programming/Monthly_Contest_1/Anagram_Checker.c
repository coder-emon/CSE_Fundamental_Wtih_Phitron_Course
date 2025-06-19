#include <stdio.h>
#include <string.h>
int main()
{
    char a[101];
    char b[101];
    scanf("%s %s", a, b);
    int length = strlen(a);
    if (strlen(a) != strlen(b)) {
        printf("No");
        return 0;
    }
    int check= 0;
    for(int i = 0; i < length; i++){

        for(int j = 0; j < length; j++){
            if(a[i] == b[j]){
                check++;
                break;
            }
        }
    }
    if(check == length){
        printf("Yes");
    }else{
        printf("No");
    }
return 0;
}