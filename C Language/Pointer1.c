#include<stdio.h>

int main()
{
    int No=11;
    int *ptr = &No; 

    double Data=90.999;
    double *dptr=&Data;

    printf("%lu\n",No);  //11
    printf("%f\n",Data); //90.9999

    printf("%lu\n",sizeof(No));  //4
    printf("%lu\n",sizeof(ptr)); //8
    printf("%lu\n",sizeof(Data)); //8
    printf("%lu\n",sizeof(dptr)); //8

    printf("%lu\n",*ptr); //11
    printf("%lu",*dptr);    //90.9999
    
    return 0;
}
