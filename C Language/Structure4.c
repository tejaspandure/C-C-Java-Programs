
#include<stdio.h>


#pragma pack(1) //lagel tase biscuits... (1)=allocate 1 biscuit at a time.. allocate 1 byte at a time

struct Student
{
    int RollNo;         //4
    char Division;      //1
    int Age;            //4
    float Marks;        //4
    int Salary;         //4
    

};


int main()
{
    //struct Student Sobj;               creating object of Structure...

    struct Student Amit;
    struct Student Pooja;

    printf("Size of object is :%d\n",sizeof(Amit));
    



    return 0;
}

