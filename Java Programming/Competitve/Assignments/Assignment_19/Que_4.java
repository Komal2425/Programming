//Write a program to print each digit of a number separately

class Logic
{
    void printDigits(int num)
    {
        // Handle negative numbers
        if (num < 0) 
        {
            num = -num;
        }
        
        // Handle 0 explicitly
        if (num == 0)
         {
            System.out.println(0);
            return;
         }

        // Reverse the number to print from left to right
        int reversedNum = 0;
        int temp = num;
        while (temp > 0) 
        {
            reversedNum = (reversedNum * 10) + (temp % 10);
            temp = temp / 10;
        }

        // Extract and print digits from the reversed number
        while (reversedNum > 0) 
        {
            int digit = reversedNum % 10;
            System.out.println(digit);
            reversedNum = reversedNum / 10;
        }
    }
}

class Que_4
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.printDigits(9876);
    }
}
