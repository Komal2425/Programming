class Logic 
{
    void findMax(int a, int b)
     {
        if (a > b)
        {
            System.out.println("Maximum is: " + a);
        } 
         else if (b > a)
        {
            System.out.println("Maximum is: " + b);
        } 
        else 
        {
            System.out.println("Both numbers are equal.");
        }
    }
}

class Que_3
{
    public static void main(String args[]) 
    {
        Logic obj = new Logic();
        obj.findMax(20, 15); // Output: Maximum is: 20
    }
}
