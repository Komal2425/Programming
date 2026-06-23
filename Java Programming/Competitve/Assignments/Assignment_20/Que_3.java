//Write a program to check whether a number is a perfect Number or not.

class Logic
{
    void checkPerfect(int num)
    {
        if (num <= 0) 
        {
            System.out.println("Not a Perfect Number");
            return;
        }

        int sum = 0;
        
        // Find proper divisors up to num/2
        for (int i = 1; i <= num / 2; i++) 
        {
            if (num % i == 0)
             {
                sum += i;
            }
        }
        
        // Check if the sum of divisors equals the number
        if (sum == num) 
        {
            System.out.println("Perfect Number");
        } 
        else 
        {
            System.out.println("Not a Perfect Number");
        }
    }
}

class Que_3
{
    public static void main(String[] args)
     {
        Logic obj = new Logic();
        obj.checkPerfect(6);
        
     }
}
