
#include<stdio.h>

int Multiplication(int No1, int No2)
{
    int Ans = 0;
    Ans = No1*No2;
    return Ans;
        
}


int main()
{
    int Value1=0, Value2=0, Ret=0, Div=0, Add=0, Sub=0;
    
    int (*fptr) (int , int );

    fptr = Multiplication; // address bhetel jo text section madhe ahe to

    printf("Enter first number:");
    scanf("%d",&Value1);
    printf("\nEnter the second number:");
    scanf("%d",&Value2);

    Ret = fptr(Value1,Value2); // function name chya jagi apan pointer name vaparlay....

    printf("\nMultiplication  of two number is: %d\n", Ret);


    return 0;
}


// int Multiplication(int No1, int No2)


// int (*fprt) (int , int );