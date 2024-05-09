#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;

    private:
        int j;

    protected:
        int k;

    public:
        Demo()
        {
            i = 11;
            j = 21;
            k = 31;
        }
};

int main()
{
    Demo Dobj;
    cout<<Dobj.i;
    cout<<Dobj.j;
    cout<<Dobj.k;
    return 0;
}