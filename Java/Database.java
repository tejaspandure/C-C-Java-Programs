import java.sql.*; //1

class Database
{
    public static void main(String args[]) throws Exception
    {
        Connection cobj = DriverManager.getConnection("jdbc:m"," "," ");

        Statement sobj = cobj.createStatement();  //3

        ResultSet robj = sobj.executeQuery("select* from student");   //4

        while(robj.next())     //5
        {
            System.out.println("RNo:"+robj.getInt("rno"));
            System.out.println("Name: "+robj.getString("name"));
            System.out.println("City: "+robj.getString("City"));
        }

    }
}