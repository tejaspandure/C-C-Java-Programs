#include <stdio.h>

void Tejas()
{
    int x = 10;
    x++;
    printf("Value of x is: %d\n",x);
    

}

int main()
{
    printf("Demonstration of static storage class...\n");
    Tejas();

    Tejas();

    Tejas();

    
    

    return 0;
}

/*
    Where the memory gets allocated : directly cpu register;
    what is the default value : Garbage;
    what is the scope: Inside the function;
    what is the lifetime : Local
*/