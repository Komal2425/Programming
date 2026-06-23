// Display All Factors of a Given Number.

class Logic
{
    void displayFactors(int num)
    {
        // Handle negative numbers by converting to positive
        if (num < 0)
         {
            num = -num;
        }

        for (int i = 1; i <= num; i++) 
        {
            if (num % i == 0)
             {
                System.out.print(i + " ");
             }
        }
        System.out.println(); // New line after printing factors
    }
}

class Que_3
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.displayFactors(12);
        
    }
}
