
class Tejas
{

   public int i,j;

   public Tejas()
   {
       System.out.println("Marvellous constructor\n");

   }
   protected void finalize()
   {
       System.out.println("Inside finalize method\n");
   }
}
//class ObjectDemo extends Object
class ObjectDemo2
{
    public static void main(String args[])
    {
       Tejas obj = new Tejas();
       System.out.println(obj.hashCode());
       obj = null;
       System.gc();
    }

}
