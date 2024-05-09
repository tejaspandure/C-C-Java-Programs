#include<iostream>
using namespace std;

const int A = 10;       // constant global variable
int B = 20;

class Demo
{
    public : 
        int X, Y;
        Demo()
        {
            X = 10;
            Y = 20;
        }
        void fun(int i, const int j)        //constant input argument
        {
            int No1 = 11;
            const int No2 = 21;     //constant local variable
            i++; //Allowed
            j++; //Not Allowed
            No1++;//Allowed
            No2++;  //Not allowed
        }
};

int main()
{
    Demo Dobj1;
    const Demo Dobj2;       // constant object

    Dobj1.fun(51,101);

    Dobj1.X++; // Allowed
    Dobj1.Y++; //allowed
    Dobj2.X++; //Not Allowed
    Dobj2.Y++; //Not allowed
    A++; //Not Allowed
    B++; //Allowed
    return 0;
}