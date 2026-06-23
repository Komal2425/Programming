//Write a program to find largest digit in a given numbers

class Logic
{
    void findLargestDigit(int num)
    {
        // Handle negative numbers
        if (num < 0) 
        {
            num = -num;
        }

        int maxDigit = 0;

        // Extract digits and find the largest
        while (num > 0) 
        {
            int digit = num % 10;

            if (digit > maxDigit)
             {
                maxDigit = digit;
             }
            num = num / 10;
        }

        System.out.println(maxDigit);
    }
}

class Que_4
{
    public static void main(String[] args)
     {
        Logic obj = new Logic();
        obj.findLargestDigit(83429);
        
     }
}
