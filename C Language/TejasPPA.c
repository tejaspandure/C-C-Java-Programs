// Inbuilt header file
#include <stdio.h>

// User defined header file
#include "PPA.h"

int main()
{
    struct Demo Dobj;
    int r = 3;
    float Area = 0;
    float f = PI;

    Area = f*(r*r);

    

    printf("%f\n",f);

    printf("Area of circle is: %d\n",Area);
    return 0;
}

/*
    gcc TejasPPA.c -o Myexe
    Myexe.exe
*/