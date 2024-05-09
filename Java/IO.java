import java.util.*;

class IO
{

    
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the first number:");
        int iNo1 = sobj.nextInt();

        System.out.println("Enter the second number: ");
        int iNo2 = sobj.nextInt();

        int Ans = iNo1 + iNo2;
        System.out.println("Addition is :"+Ans);

        
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