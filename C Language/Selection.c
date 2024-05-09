#include<stdio.h>

int main()
{
    int a=0;
    int Ans=0;
    printf("Enter the number: ");
    scanf("%d",&a);
    Ans=a%2==0;
    
    if(Ans==0) // jar Ans madhe 0 asel tar..
    {
        printf("Even");
    }
    else
    {
        printf("Odd number");
        
    }

    
    return 0;
}