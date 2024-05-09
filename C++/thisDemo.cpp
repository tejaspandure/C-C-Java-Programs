#include<iostream>
using namespace std;

class Arithmetic
{
    public:
        int No1;
        int No2;
        
        Arithmetic(int A, int B)
        {
            No1 = A;
            No2 = B;
        }
        int Addition()  // int Addition(Arithmetic * const this)
        {
            int Add = 0;
            //Add = No1 + No2;
            Add = this->No1 + this->No2;
            return Add;
        }
        
};

int main()
{
    int Ret = 0;
    Arithmetic Aobj(21,11);

    Ret = Aobj.Addition();  //Ret = Addition(&obj);  Ret = Addition(100);
    cout<<"Additon is: "<<Ret<<"\n";

    
    return 0;
}