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

int main()
{
    Demo Dobj1(10,11);
    Demo Dobj2(20,21);

    Dobj1 + Dobj2;  //+ operator is binary

    return 0;
}