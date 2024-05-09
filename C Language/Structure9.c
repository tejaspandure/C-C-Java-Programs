#include<stdio.h>

struct Demo
{
    int no;
    int data;
};

int main()
{
    struct Demo Dobj;
    
    struct Demo*ptr = &Dobj;      


    // . is direct accessing operator
    Dobj.no = 11;
    // -> is indirect accessing operator
    ptr->data = 21;

    return 0;
}