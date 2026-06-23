class Logic
{
    void findMin(int a, int b, int c)
    {
        // Assume 'a' is the minimum initially
        int min = a; 
        
        // Compare with 'b'
        if (b < min)
        {
            min = b;
        }
        // Compare with 'c'
        if (c < min)
        {
            min = c;
        }
        
        System.out.println("Minimum number is: " + min);
    }
}

class Que_4
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.findMin(3, 7, 2);
    }
}
