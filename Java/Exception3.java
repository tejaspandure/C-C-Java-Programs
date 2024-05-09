import java.util.*;

class Exception3
{

    
    public static void main(String args[])
    {
        try
        {
        Scanner sobj = new Scanner(System.in);
        int Arr[] = {10,20,30,40,50};

        System.out.println("Enter the index number:");
        int i = sobj.nextInt();

        System.out.println(Arr[i]);
        }
        catch(ArrayIndexOutOfBoundsException sobj)
        {
            System.out.println("Insdie catch block");
        }
        finally
        {
            System.out.println("Inside finally block");
        }
        System.out.println("End of code");
        
    }
    
}



/*
   Datatype             Function

   boolean              nextBoolean()
   byte                 nextByte()
   char                 ----
   int                  nextInt()
   float                nextFloat()
   double               nextDouble()
   String               nextLine()
 */