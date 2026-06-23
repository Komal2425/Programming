//write a program to calculate the product of a digit of a number 

class Logic
{
    void productOfDigits(int num)
    {
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

        int product = 1;

        while (num > 0)
         {
            int digit = num % 10;
            product *= digit;
            num /= 10;
        }

        System.out.println(product);
    }
}

class Que_1
{
    public static void main(String[] args)
    {
        Logic obj = new Logic();
        obj.productOfDigits(234);
        
    }
}


