#include <stdio.h>

int x = 21;

extern int no;
extern void Tejas();
int main()
{
    printf("Value of c is: %d\n",x);

    printf("value of no is: %d\n",no);

    Tejas();

    return 0;
}

/*
    Definations    (Declaration + Defination)
    int no;
    int no = 0;
    int no = 11;

    Declaration 
    extern int no;    (location dakhavtoy...)
*/