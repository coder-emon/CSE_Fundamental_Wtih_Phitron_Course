#include <stdio.h>

void shiftZeros (int a[], int n)
{
    int idx = 0;
    int countZero = 0;
    for(int i = 0; i < n; i++){
        if(a[i] > 0 ){
            a[idx] = a[i]; 
            idx++;
        }else{
            countZero++;
        }
    }

    //Count how many zeros then that places right to left
    // for(int i = n -1; i > n -1 -countZero; i--){
    //     a[i] = 0;
    // }

    //Track pos where finisd Non-zero element from there to less than n filling the zeros;
    for(int i = idx; i < n; i++){
        a[i] = 0;
    }

}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    shiftZeros(a, n);
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
return 0;
}