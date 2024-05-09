
class Demo
{
    public int iNo1 = 0;
    public final int iNo2 = 21;

    public Demo()
    {
        iNo1 = 11;
    }
}
class Final1 
{
    public static void main(String C[])
    {
        Demo dobj = new Demo();

        dobj.iNo1++;
        dobj.iNo2++;

    }
    
}
