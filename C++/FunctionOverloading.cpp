#include <iostream>
using namespace std;

class Arithematic
{
    public:
        int Addition(int No1, int No2)//Addition@2ii
        {
            return No1 + No2;
        }
        int Addition(int No1, int No2, int No3)//Addition@3ii
        {
            return No1 + No2 + No3;
        }
        double Addition( double No1, double No2)//Addition@2dd
        {
            return No1 + No2;
        }
        double Addition(double No1, double No2, double No3)//Addition@3ddd
        {
            return No1 + No2 + No3;
        }

};
int main()
{
    Arithematic Aobj;

    cout<<Aobj.Addition(11,21)<<"\n";
    cout<<Aobj.Addition(11,21,31)<<"\n";
    cout<<Aobj.Addition(11.11,21.21)<<"\n";
    cout<<Aobj.Addition(11.11,21.21,31.31)<<"\n";

    return 0;
}