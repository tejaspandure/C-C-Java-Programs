#include<stdio.h>
int main()
{
    int No = 11;
    int *ptr = &No;
    


    printf("%d\n",*ptr);
    int ptr = &No;
    printf("%d\n",ptr);
   return 0;
}