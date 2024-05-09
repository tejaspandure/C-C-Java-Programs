import Marvellous.Arithmetic;
import Infosystems.Mathematics;;
class PPA
{
    
        public static void main(String Arg[])
        {
            Arithmetic aobj = new Arithmetic();
            Mathematics mobj = new Mathematics();

            System.out.println(aobj.Addition(11,10));
            System.out.println(aobj.Substraction(11,10));

            System.out.println(mobj.Multiplication(11,10));
            System.out.println(mobj.Multiplication(10,11));
        }
}
