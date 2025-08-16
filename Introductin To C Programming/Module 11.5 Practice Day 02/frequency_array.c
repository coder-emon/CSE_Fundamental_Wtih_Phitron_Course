#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    
    
    // int count0 = 0, count1 = 0 , count2 = 0, count3 = 0, count4 = 0, count5 = 0;
    // for(int i = 0; i < n; i++){
    //     if(a[i] == 0)
    //     {
    //         count0++;
    //     }
    //     else if(a[i] == 1){
    //         count1++;
    //     }
    //     else if(a[i] == 2){
    //         count2++;
    //     }
    //     else if(a[i] == 3){
    //         count3++;
    //     }
    //     else if(a[i] == 4){
    //         count4++;
    //     }
    //     else if(a[i] == 5){
    //         count5++;
    //     }
    
    // }

    // printf("0 -> %d\n", count0);
    // printf("1 -> %d\n", count1);
    // printf("2 -> %d\n", count2);
    // printf("3 -> %d\n", count3);
    // printf("4 -> %d\n", count4);
    // printf("5 -> %d\n", count5);

    int b[6] ={0};
    for(int i = 0; i < n; i++){
        int val = a[i];
        b[val]++;
    }
    for(int i = 0; i < 6; i++){
        printf("%d > %d\n",i ,b[i]);
    } 
return 0;
}