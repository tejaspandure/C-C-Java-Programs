#include <stdio.h>

void Tejas()
{
    static int x = 10;
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
    Where the memory gets allocated : static section;
    what is the default value : 0/0.0/ '/0'
    what is the scope: Inside the function;
    what is the lifetime : Global
*/