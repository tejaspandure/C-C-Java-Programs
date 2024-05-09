#include<iostream>
using namespace std;

class Arithmetic
{
    public:
        int No1;
        int No2;

        Arithmetic()
        {
            No1 = 0;
            No2 = 0;
        }
        Arithmetic(int A, int B)
        {
            No1 = A;
            No2 = B;
        }


        int Addition()
        {
            int Add = 0;
            Add = No1 + No2;
            return Add;
        }
        int Substraction()
        {
            int Sub = 0;
            Sub = No1 - No2;
            return Sub;
        }
        int Multiplication()
        {
            int Mul = 0; 
            Mul = No1 * No2;
            return Mul;
        }
        int Division()
        {
            int Div = 0;
            Div = No1 = No2;
            return Div;
        }
};

int main()
{
    int Value1 = 0, Value2 = 0;
    int Ret = 0;
    
    cout<<"Enter first number: \n";
    cin>>Value1;

    cout<<"Enter second number: \n";
    cin>>Value2;

    Arithmetic Aobj(Value1,Value2);
    Ret = Aobj.Addition();
    cout<<"Additon is: "<<Ret<<"\n";

    Ret = Aobj.Substraction();
    cout<<"Division is: "<<Ret<<"\n";

    Ret = Aobj.Multiplication();
    cout<<"Multiplication is: "<<Ret<<"\n";

    Ret = Aobj.Division();
    cout<<"Division is: "<<Ret<<"\n";
    return 0;
}