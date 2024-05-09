#include <stdio.h>

struct Demo
{
    int *p;
    float *q;
};

int main()
{
    struct Demo Dobj;

    int no = 11; 
    float f = 90.99f;

    Dobj.p=&no;
    Dobj.q=&f;

    printf("%d\n",*(Dobj.p));
    printf("%f\n",*(Dobj.q));


    return 0;
}