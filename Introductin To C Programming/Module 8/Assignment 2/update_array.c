#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int A[N];
    for(int i = 0; i < N; i++){
        scanf("%d", &A[i]);
    }
    int x, v;
    scanf("%d %d", &x, &v);
    A[x] = v;
    for(int i = N -1; i >= 0; i--){
        printf("%d ", A[i]);
    }
    
return 0;
}