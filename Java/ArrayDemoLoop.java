class ArrayDemoLoop
{
    public static void main(String args[])
    {
       int Arr[] = new int []{10,20,30,40,50};
       int i = 0;

       for(i= 0; i<Arr.length ; i++)
       {
        System.out.println(Arr[i]);
       }

       i = 0;
       while(i<Arr.length)
       {
        System.out.println(Arr[i]);
        i++;
       }
       
       i=0;
       do{
        System.out.println(Arr[i]);
        i++;
       }while(i<Arr.length);
    }  
}
