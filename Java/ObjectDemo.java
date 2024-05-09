
/*
 * 
 *  getClass()
 *  hashcode()
 *  equals()
 *  clone()
 *  finalize()
 */

class Tejas
{ }
//class ObjectDemo extends Object
class ObjectDemo
{
    public static void main(String args[])
    {
        Object obj = new Tejas();                           //Upcasting
        System.out.println(obj.getClass().getName());
    }

}
