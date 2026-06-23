//Print All Numbers from 1 to N Divisible by Both 2 and 3.

class Logic
{
    void printDivisibleBy2and3(int n)
    {
        // Loop from 1 up to n
        for (int i = 1; i <= n; i++) 
        {
            // Check if divisible by both 2 and 3 (or simply i % 6 == 0)
            if (i % 2 == 0 && i % 3 == 0) 
            {
                System.out.print(i + " ");
            }
        }
        System.out.println(); // New line after printing numbers
    }
}

class Que_5
{
    public static void main(String[] args)
    {
        Logic obj = new Logic();
        obj.printDivisibleBy2and3(30);
        
    }
}
