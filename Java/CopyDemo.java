
class Student implements Cloneable
{
    public String Name;
    public int Marks;
    public int Age;

    public Student(String str, int iA, int iB)
    {
        this.Name = str;
        this.Marks  = iA;
        this.Age = iB;

    }
    public Object clone() throws CloneNotSupportedException
    {
        return super.clone();
    }
}
public class CopyDemo
{
    public static void main(String args[])
    {
        try
        {
        Student sobj = new Student("Amit",87,25);
        System.out.println("Name of student:"+sobj.Name);
        System.out.println("Marks obtain by the student: "+sobj.Marks);
        System.out.println("Age of Student: "+sobj.Age);

        Student sbojX =(Student) sobj.clone();
        System.out.println("Name of student:"+sobj.Name);
        System.out.println("Marks obtain by the student: "+sobj.Marks);
        System.out.println("Age of Student: "+sobj.Age);
        
        }
        catch(Exception obj)
        {}
    }
    
}
