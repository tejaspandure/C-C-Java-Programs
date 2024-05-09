#include<stdio.h>

struct Tejas
{
    int no;
    float f;
    int i;
};

int main()
{
    struct Tejas Tobj;

    struct Tejas *ptr = &Tobj;

    ptr->no = 11;
    ptr->f = 90.99;  ///  -> : indrect accessing operator
    ptr->i = 21;

    printf("%d\n",ptr->no);
    printf("%d\n",Tobj.no);

    printf("%d\n",sizeof(Tobj));

    return 0;
}