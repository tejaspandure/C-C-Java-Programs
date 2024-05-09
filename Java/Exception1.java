import java.util.*;

class Exception1
{

    
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the first number:");
        int iNo1 = sobj.nextInt();

        System.out.println("Enter the second number: ");
        int iNo2 = sobj.nextInt();

        float Ans = iNo1 / iNo2;
        System.out.println("Division is :"+Ans);

        
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