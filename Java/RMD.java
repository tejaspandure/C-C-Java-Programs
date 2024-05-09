
class Base
{
    public int iA = 0;
    public int iB = 0;
    public void Fun()
    {System.out.println("Inside Base Fun");}
    public void Gun()
    {System.out.println("Inside Base Gun");}
    public void Sun()
    {System.out.println("Inside Base Sun");}
    public void Run()
    {System.out.println("Inside Base Run");}
}

class Derived extends Base              // class Derived : public Base
{
    public int iX = 0;
    public int iY = 0;
    public void Gun()
    {System.out.println("Inside Derived Gun");}
    public void Run()
    {System.out.println("Inside Derived Run");}
    public void Mun()
    {System.out.println("Inside Derived Mun");}
}

class RMD
{
    public static void main(String B[])
    {
        Base bobj = new Derived(); //upcasting
        bobj.Fun();                 //Base fun
        bobj.Gun();                 //Derived gun
        bobj.Sun();                 //Base sun
        bobj.Run();                 //Derived Run
        //bobj.Mun();                 //error
    }
    
}
