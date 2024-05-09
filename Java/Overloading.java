class Demo
{
    public int Addition(int iA, int iB)
    {
        return iA + iB;
    }
    public int Addition(int iA, int iB, int iC)
    {
        return iA + iB + iC;
    }
    public double Addition(double dA, double dB)
    {
        return dA + dB;
    }
    public void Fun(int iA, double dB)
    {}
    public void Fun(double dA, int iB)
    {}
}

class Overloading
{
    public static void main(String C[])
    {
        Demo Dobj = new Demo();
        int iRet = 0;
        double dRet = 0.0;
        iRet = Dobj.Addition(10,20);
        System.out.println(iRet);
        iRet = Dobj.Addition(10,20,30);
        System.out.println(iRet);
        dRet = Dobj.Addition(10.20, 20.0);
        System.out.println(dRet);
    }
}
