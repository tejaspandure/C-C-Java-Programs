#include<iostream>
using namespace std;

class Arithmetic
{
    public:
        int No1;
        int No2;

        Arithmetic()
        {
            cout<<"Inside default constructor\n";
            No1 = 0;
            No2 = 0;
        }
        Arithmetic(int A, int B)
        {
            cout<<"Inside Parameterised constructor\n";
            No1 = A;
            No2 = B;
        }
        Arithmetic(Arithmetic &ref)
        {
            cout<<"Inside copy constructor\n";
            No1 = ref.No1;
            No2 = ref.No2;
        }
        ~Arithmetic()
        {
            cout<<"Inside Destructor\n";
        }
};

int main()
{
    Arithmetic obj1;
    Arithmetic obj2(11,21);
    Arithmetic obj3(obj2);
    cout<<obj1.No1<<"\t"<<obj1.No2<<"\n";
    cout<<obj2.No1<<"\t"<<obj2.No2<<"\n";
    cout<<obj3.No1<<"\t"<<obj3.No2<<"\n";
    return 0;
}