#include<stdio.h>

#pragma pack(1)
struct Demo
{
    int no;         //4
    float f;        //4
    int data;       //4
    char ch;        //1
};                  //13

union Hello
{
    int no;         //4
    float f;        //4
    int data;       //4
    char ch;        //1
};                  //4

int main()
{
    struct Demo Dobj;
    union Hello Hobj;
    

    printf("size of structure is: %d\n", sizeof(Dobj));  //13
    printf("size of union is : %d\n",sizeof(Hobj));    // 4

    Hobj.no = 11;

    printf("%d\n", Hobj.no);

    Hobj.data = 21;

    printf("%d\n",Hobj.no);
    printf("%d\n",Hobj.data);
    return 0;
}