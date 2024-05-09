#include<stdio.h>
int Addition(int No1, int No2)
{
    int Ans=0;
    Ans=No1+No2;
    return Ans;

}
int Substraction(int No1, int No2)
{
    int Ans=0;
    Ans=No1-No2;
    return Ans;
}
int Multiplication(int No1, int No2)
{
    int Ans =0;
    Ans=No1*No2;
    return Ans;
}
int Division(int No1, int No2)
{
    int Ans=0;
    //Ans = No1/No2  //Divison operator return quotient
    Ans=No1%No2; //Mod operator return remainder
    return Ans;
}
int main()
{
    int A=10;
    int B=11;
    int Add=0;
    int Sub=0;
    int Mul=0;
    int Div=0;

    printf("Inside main function\n");

    Add=Addition(A,B);
    printf( " Addition of the given number is: %d\n",Add);
    Sub=Substraction(A,B);
    printf("Substraction of the given number is: %d\n",Sub);
    Mul=Multiplication(A,B);
    printf("Multipication of two number is: %d\n",Mul);
    Div=Division(A,B);
    printf("Division of the two number is: %d\n", Div);
    return 0;
}