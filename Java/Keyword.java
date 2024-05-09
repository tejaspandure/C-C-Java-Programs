
class Base 
{
    public int A,B;
    Base()
    {
        System.out.println("Inside base constructor");
        this.A = 10;
        this.B = 20;

    }
    public void fun()
    {
        System.out.println("Inside Fun of a base");
    }
}

class Derived extends Base
{
    public int X,Y;
    public Derived(int i, int j)
    {
        super();
        System.out.println("Inside deried cosntructor");
        this.X = i;
        this.Y = j;
    }
    public void gun()
    {
        System.out.println("Inside gun of derived");
        super.fun();
        System.out.println("Value of A: "+super.A);
        System.out.println("Value of X: "+this.X);
    }
}

class Keyword
{
    public static void main(String args[])
    {
        Derived dobj = new Derived(11,21);
        dobj.gun();
        
    }
}