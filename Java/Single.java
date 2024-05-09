
class Base
{
    public int iA = 0;
    public int iB = 0;
    public Base()
    {
        System.out.println("Base constructor");
    }
    public void Fun()
    {
        System.out.println("Inside Base Fun");
    }
}

class Derived extends Base              // class Derived : public Base
{
    public int iX = 0;
    public int iY = 0;
    public Derived()
    {
        System.out.println("Derived Destructor");
    }
    public void Gun()
    {
        System.out.println("Inside Derived gun");
    }
}

class Single
{
    public static void main(String B[])
    {
        Derived Dobj = new Derived();
        Dobj.Fun();
        Dobj.Gun();
    }
    
}
