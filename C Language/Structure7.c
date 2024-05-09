
#include <stdio.h>

struct Hello
{
    int no;
    float f;

};

struct Demo
{
    int data;
    struct Hello Hobj;
    
};

int main()
{
    struct Demo Dobj;
    Dobj.data = 11;
    Dobj.Hobj.no = 21;
    Dobj.Hobj.f = 90.00;
    

    return 0;
}