//Write a program to find the smallest digit in a given number

class Logic
{
    void findSmallestDigit(int num)
    {
        // Handle 0 as a special case
        if (num == 0)
         {
            System.out.println(0);
            return;
        }

        // Handle negative numbers
        if (num < 0) 
        {
            num = -num;
        }

        int minDigit = 9;

        // Extract digits and find the smallest
        while (num > 0)
         {
            int digit = num % 10;

            if (digit < minDigit) 
            {
                minDigit = digit;
            }
            num = num / 10;
        }

        System.out.println(minDigit);
    }
}

class Que_5
{
    public static void main(String[] args)
     {
         Logic obj = new Logic();
         obj.findSmallestDigit(45872);
        
     }
}
