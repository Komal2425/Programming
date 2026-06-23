// write a program to print numbers from N down to 1 in reverse order.

class Logic
{
    void printReverse(int n)
    {
        // Loop backwards from n down to 1
        for (int i = n; i >= 1; i--) 
        {
            System.out.println(i);
        }
    }
}

class Que_2
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.printReverse(10);
        
    }
}