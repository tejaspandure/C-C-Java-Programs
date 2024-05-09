#include<iostream>
using namespace std;

//Class Declaration
class Demo
{
    public: // Access Specifier
        int no1;    //Characteristics
        int no2;    //Characteristics

        Demo()      //Constructor
        {
            cout<<"Inside Constructor...\n";
            no1 = 11;
            no2 = 21;
        }
        ~Demo()     //Destructor
        {
            cout<<"Inside Destructor...\n";
        }
        void Fun()  //Behavious
        {
            cout<<"Inside Fun of Demo class...\n";
        }
};

int main()
{
    cout<<"Inside main function...\n";
    Demo Dobj1; //object of the function
    cout<<"size of object is: "<<sizeof(Dobj1)<<"\n";
    cout<<"Value of no1 :" << Dobj1.no1<<"\n";
    cout<<"Value of no2 :" <<Dobj1.no2<<"\n";
    Dobj1.Fun();
    
    return 0;
}