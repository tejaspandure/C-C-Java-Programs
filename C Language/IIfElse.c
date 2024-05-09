#include<stdio.h>
int main()
{
    int Standard=0;
    printf("Enter your standard: ");
    scanf("%d",&Standard);

    if(Standard==1)
    {
        printf("Your paper time is at: 7am ");
    }
    else if(Standard==2)
    {
        printf("Your paper is at: 8am");
    }
    else if(Standard==3)
    {
        printf("Your exam is at: 9am");

    }
    else if(Standard==4)
    {
        printf("Your exam is at: 10am");
    }
    else
    {
        printf("Wrong standard");
    }
    return 0;
}