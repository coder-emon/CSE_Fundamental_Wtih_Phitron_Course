#include <stdio.h>

int odd (int num1)
{
    int odd = 0;
    if(num1 % 2 != 0){
        odd = 1;
    }
    
    return odd;
}


int oddNoReturn (int num1)
{
    int odd = 0;
    if(num1 % 2 != 0){
        printf("Num is Odd\n");
    }else{
        printf("Num isn't odd\n");
    }
}


int oddNo_Return_no_Parameter()
{
    int n;
    scanf("%d", &n);
    int odd = 0;
    if(n % 2 != 0){
        printf("This N is Odd");
    }else{
        printf("This N isn't odd");
    }
}

int main()
{   
    int n;
    scanf("%d", &n);
    int oddValue = odd(n);
    if(oddValue){
        printf("Number is odd\n");
    }else{
        printf("Number is not odd\n");
    }

    oddNoReturn(n);
    oddNo_Return_no_Parameter();
return 0;
}