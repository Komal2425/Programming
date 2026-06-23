//Count Total Number of Factors of a Given Number.

class Logic
{
    void countFactors(int num)
    {
        // Handle negative numbers by converting to positive
        if (num < 0) 
        {
            num = -num;
        }

        int count = 0;

        // Loop to find and count all divisors
        for (int i = 1; i <= num; i++) 
        {
            if (num % i == 0)
            {
                count++;
            }
        }

        System.out.println(count);
    }
}

class Que_4
{
    public static void main(String[] args)
    {
        Logic obj = new Logic();
        obj.countFactors(20);
        
        
    }
}
