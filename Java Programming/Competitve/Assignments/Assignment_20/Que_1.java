// write a program to find the Sum of All Even Numbers Up to N.

class Logic
{
    void sumEvenNumbers(int n)
    {
        int sum = 0;
        
        // Loop from 1 up to n
        for (int i = 1; i <= n; i++)
         {
            if (i % 2 == 0) 
            {
                sum += i;
            }
        }
        
        System.out.println(sum);
    }
}

class Que_1
{
    public static void main(String[] args)
     {
        Logic obj = new Logic();
        obj.sumEvenNumbers(10);
        
     }
}