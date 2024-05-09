
class OOP {
    public static void main(String args[])
    {
        Arithmetic obj1 = new Arithmetic();
        Arithmetic obj2 = new Arithmetic(21,11);
        
        int Ret = 0;
        
        Ret = obj2.Addition();
        System.out.println(Ret);                     //32

        Ret = obj2.Substraction();
        System.out.println(Ret);                    //10

    }
}

class Arithmetic
{
    public int No1;
    public int No2;

    public Arithmetic()
    {
        System.out.println("Inside Default constructor.\n");
        this.No1 = 0;
        this.No2 = 0;
    }
    public Arithmetic (int A, int B)
    {
        System.out.println("Inside parametrised constructor.\n");
        this.No1 = A;
        this.No2 = B;
    }
    public int Addition()
    {
        int Ans = 0;
        Ans = No1 + No2;
        return Ans;
    }
    public int Substraction()
    {
        int Ans = 0;
        Ans = No1 - No2;
        return Ans;
    }
}