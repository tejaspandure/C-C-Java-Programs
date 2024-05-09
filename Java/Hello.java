
abstract class Demo
{
    public int iAddition(int iA, int iB)
    { return iA + iB; }
    public int iSubstraction(int iA, int iB)
    { return iA-iB; }
    public abstract int iMultiplication(int iA, int iB);
}

class Tejas extends Demo
{
    public int iDivision(int iA, int iB)
    { return iA/iB; }
    public int iMultiplication(int iA, int iB)
    { return iA*iB; } 
}

class Hello
{
    public static void main(String args[])
    {
        // dobj = new Demo();
        Tejas Tobj = new Tejas();
        System.out.println(Tobj.iAddition(10,11));
        System.out.println(Tobj.iSubstraction(10,11));
        System.out.println(Tobj.iMultiplication(10,11));
        System.out.println(Tobj.iDivision(10,11));

    }
}
