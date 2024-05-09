#include <stdio.h>

void Tejas()
{
    int i = 11;
    auto int j = 21;
    auto int k;

    printf("%d\n", k);

}

int main()
{
    printf("Demonstration of auto storage class...\n");
    Tejas();
    return 0;
}

/*
    Where the memory gets allocated : Stack ;
    what is the default value : Garbage;
    what is the scope: Inside the function;
    what is the lifetime : Local
*/