#include <stdio.h>
int main()
{
    int tc;
    scanf("%d", &tc);

    for(int i = 0; i < tc; i++){
        long long int mul;
        int  a, b, c;
        scanf("%lld %d %d %d", &mul, &a, &b, &c);
        long long int threeMul = (long long int)a * b * c;
        double missingNum = (double)mul / threeMul;

        if(threeMul == 0){
            if(mul == 0){
                printf("0");
            }else{
                printf("-1");
            }
        }else if(mul % threeMul == 0 ){
            printf("%0.lf", missingNum);
        }else{
            printf("-1");
        }

        printf("\n");
    }
    return 0;
}