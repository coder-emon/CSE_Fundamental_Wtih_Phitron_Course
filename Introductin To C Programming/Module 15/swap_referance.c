#include <stdio.h>
void swap (int* p, int* q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}

// void m(int *p)
// {
//     int i = 0;
//     for(i = 0; i < 5; i++){
//         printf("%d ", p[i]);
//     }
// }

int main()
{
    int a= 6, b =5;
    swap(&a, &b);
    printf("%d %d\n", a, b);

    // int c[5] ={6, 5, 3};
    // printf("%d\n", *c);
    // m(c);
    int d[4] = {1, 2 , 3, 4};
    int* p;
    p = d +3; // here p is pointer variable and it store the address of the variable on above array d we find there first address reference on d then we add 3 on it and then it goes to the the index address then we store it's address on our pointer variable p;
    *p = 5;  // now direfference the pointer variable then we goes that 3rd index address and update it;

    printf("%d", d[3]); // print the updated value;
return 0;
}