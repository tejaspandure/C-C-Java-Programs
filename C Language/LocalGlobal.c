#include <stdio.h>

int x = 101;

void Tejas()
{
    int i = 21;
    int no = 51;

    printf("Form Tejas value of no is: %d\n",no);
    printf("From Tejas value of i is : %d\n",i);
    printf("From Tejas value of x is: %d\n", x);
}

int main()
{
    int no = 11;

    printf("From main value of no is: %d\n",no);
    printf("Form main the value of X is : %d\n", x);

    Tejas();
    
    return 0;
}