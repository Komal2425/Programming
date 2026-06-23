//Write a program to check whether a number is prime or not.

class Logic
 {
    void checkPrime(int num) 
    {
        // Numbers less than or equal to 1 are not prime

        if (num <= 1) 
        {
            System.out.println(num + " is not a prime number.");
            return;
        }

        boolean isPrime = true;

        // Check for factors from 2 up to the square root of the number

        for (int i = 2; i <= Math.sqrt(num); i++)
        {
            if (num % i == 0)
             {
                isPrime = false;
                break; // Factor found, stop checking
            }
        }

        // Output the result
        if (isPrime)
         {
            System.out.println(num + " is a prime number.");
         }
         else 
         {
            System.out.println(num + " is not a prime number.");
         }
    }
}

class Que_1 
{
    public static void main(String A[]) 
    {
        Logic obj = new Logic();
        
        // Pass 11 to the method as requested
        obj.checkPrime(11);
    }
}
