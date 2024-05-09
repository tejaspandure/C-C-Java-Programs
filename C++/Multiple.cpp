#include<iostream>
using namespace std;

class Demo
{
    public :
        int A;
        Demo()
        {
            A = 10;
            cout<<"Inside Demo constructor\n";
        }
        ~Demo()
        {
            cout<<"Inside Demo\n";
        }
        void Fun()
        {
            cout<<"Inside Fun of Demo\n";
        }

};

class Hello
{
    public : 
        int B;
        Hello()
        {
            B = 20;
            cout<<"Inside Hello Constructor\n";
        }
        ~Hello()
        {
            cout<<"Inside Hello\n";
        }
        void Gun()
        {
            cout<<"Inside Gun of Hello\n";
        }

};

class Tejas : public Hello, public Demo
{
    public : 
        int C;
        Tejas()
        {
            C = 30;
            cout<<"Inside Tejas Constructor\n";
        }
        ~Tejas()
        {
            cout<<"Inside Tejas\n";
        }
        void Sun()
        {
            cout<<"Inside Sun of Tejas\n";
        }

    
};

int main()
{
    Tejas Tobj;

    Tobj.Fun();
    Tobj.Gun();
    Tobj.Sun();

    cout<<Tobj.A<<"\n";
    cout<<Tobj.B<<"\n";
    cout<<Tobj.C<<"\n";
    return 0;
}