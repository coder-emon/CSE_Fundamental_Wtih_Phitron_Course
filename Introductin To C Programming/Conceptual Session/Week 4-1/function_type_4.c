#include <stdio.h>
void evenIndex_arr(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n; i++){
        if(i >= 2 && i % 2 == 0){
            printf("%d ", a[i]);
        }
    }
}
int main()
{
    
evenIndex_arr();
return 0;
}