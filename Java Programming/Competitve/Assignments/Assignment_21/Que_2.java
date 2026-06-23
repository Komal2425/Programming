//Count Even and Odd Numbers Between 1 and 

class Logic
{
    void countEvenOddRange(int n)
    {
        int evenCount = 0;
        int oddCount = 0;

        for (int i = 1; i <= n; i++) 
        {
            if (i % 2 == 0) 
            {
                evenCount++;
            } 
            else
             {
                oddCount++;
            }
        }

        System.out.println("Even: " + evenCount + ", Odd: " + oddCount);
    }
}

class Que_2
{
    public static void main(String[] args)
    {
        Logic obj = new Logic();
        obj.countEvenOddRange(50);
        
    }
}
