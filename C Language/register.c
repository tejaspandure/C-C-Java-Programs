#include <stdio.h>

void Tejas()
{
    int i = 11;
    register int j = 21;
    register int k;

    printf("%d\n", k);

}

int main()
{
    printf("Demonstration of register storage class...\n");
    Tejas();
    return 0;
}

/*

    Where the memory gets allocated : directly cpu register;
    what is the default value : Garbage;
    what is the scope: Inside the function;
    what is the lifetime : Local
*/