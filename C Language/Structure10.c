#include<stdio.h>

//self referential structure
struct Demo
{
    int data;
    struct Demo *next;
};

int main()
{
    struct Demo Dobj1;
    struct Demo Dobj2;
    struct Demo Dobj3;

    Dobj1.data=11;
    Dobj1.next = &Dobj2;

    Dobj2.data = 21;
    Dobj2.next = &Dobj3;

    Dobj3.data = 51;
    Dobj3.next = NULL;

    printf("%d\n", Dobj1.data);                     //11
    printf("%d\n", Dobj1.next->data);               //21
    printf("%d\n", Dobj1.next->next->data);         //51
    return 0;
}