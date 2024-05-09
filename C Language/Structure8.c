
#include <stdio.h>



struct Demo
{
    int data;
    struct Hello
    {
        int no;
        float f;

    }Hobj;
    
    
};

int main()
{
    struct Demo Dobj;
    Dobj.data = 11;
    Dobj.Hobj.no = 21;
    Dobj.Hobj.f = 90.00;
    

    return 0;
}