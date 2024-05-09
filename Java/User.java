import java.util.*;
import java.io.*;

class AgeInvalid extends Exception
{

}
class User
{
    public static void main(String args[])
    {
        try
        {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Please Enter your age: ");
            int iAge = sobj.nextInt();
            
            if(iAge < 18)
            {
                throw new AgeInvalid();
            }
            else
            {
                System.out.println("You Successfully login to our site:\n");
            }

        }
        catch(AgeInvalid obj)
        {
            System.out.println("Age is invalid to register for this site");
        }
    }
}