#include<stdio.h>

int Multiplication(int No1, int No2)
{
    int Ans = 0;
    Ans = No1*No2;
    return Ans;
        
}
int Division(int No1, int No2)
{
    int Ans=0;
    Ans = No1/No2;
    return Ans;
}
int Addition(int No1, int No2)
{
    int Ans = 0;
    Ans = No1+No2;
    return Ans;
}
int Substraction(int No1, int No2)
{
    int Ans = 0;
    Ans = No1-No2;
    return Ans;
}

int main()
{
    int Value1=0, Value2=0, Ret=0, Div=0, Add=0, Sub=0;
    

    printf("Enter first number:");
    scanf("%d",&Value1);
    printf("\nEnter the second number:");
    scanf("%d",&Value2);

    Ret=Multiplication(Value1,Value2);

    printf("\nMultiplication  of two number is: %d\n", Ret);

    Div=Division(Value1,Value2);
    printf("\nDivision of two number is: %d\n",Div);

    Add=Addition(Value1,Value2);
    printf("\nAddition of two number is: %d\n", Add);

    Sub=Substraction(Value1,Value2);
    printf("\nSubstration of two number is: %d\n", Sub);


    return 0;
}