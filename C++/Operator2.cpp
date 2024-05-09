#include<iostream>
using namespace std;

class Demo
{
    public:
        int A,B;
        Demo(int i, int j)
        {
            A = i;
            B = j;
        }
};

Demo operator + (Demo op1, Demo op2)
{
    cout<<"Inside operator overloading function \n";
    return Demo(op1.A+op2.A, op1.B+op2.B);  
}

int main()
{
    Demo Dobj1(10,11);
    Demo Dobj2(20,21);
    Demo Ans(0,0);

    Ans= Dobj1 + Dobj2;

    cout<<Ans.A<<"\t"<<Ans.B<<"\n";

    return 0;
}