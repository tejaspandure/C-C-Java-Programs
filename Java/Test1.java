import java.sql.*;

class Test1
{
    public static void main(String args[])
    {
        try
        {
            Connection cobj = DriverManager.getConnection("path","username","password");

            Statement sobj = cobj.createStatement();

            ResultSet robj = sobj.executeQuery("selet * from student");

            while(robj.next())
            {
                System.out.println(robj.getInt("rno"));
                System.out.println(robj.getString("name"));
                System.out.println(robj.getString("City"));
            }
        }
        catch(Exception obj)
        {
            
        }
    }
}