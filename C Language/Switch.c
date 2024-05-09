#include<stdio.h>
int main()
{
    int Standard=0;
    printf("Enter your standard: ");
    scanf("%d",&Standard);
    switch(Standard)
    {
        case 1:
            printf("Your exam is at : 7 Am");
        break;

        case 2:
            printf("Your exam is at: 8 am");
        break;

        case 3:
            printf("Your exam is at: 9 AM");
        break;

        case 4:
            printf("YOur exam is at: 10 am");
        break;

        default:
            printf("Wrong Standard");
    }
    return 0;
}