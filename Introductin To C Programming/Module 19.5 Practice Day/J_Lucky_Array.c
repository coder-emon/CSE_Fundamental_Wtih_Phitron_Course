#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    int fre[200005] = {0};
    int offset = 100000;
    int minNum = 100001;
    for(int i = 0; i < n; i++){
        int val = a[i];
        fre[val + offset]++;
        if(a[i] < minNum){
            minNum = a[i];
        }
    }
    int minValueFre = fre[minNum + offset];
    
    if(minValueFre % 2 != 0){
        printf("Lucky");
    }else{
        printf("Unlucky");
    }
return 0;
}