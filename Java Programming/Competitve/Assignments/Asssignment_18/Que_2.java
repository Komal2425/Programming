//Write a program to print all even numbers up to N

class Logic 
{
    void printEvenNumbers(int n) 
    {
        for (int i = 1; i <= n; i++)
         {
            if (i % 2 == 0)
             {
                System.out.print(i + " ");
             }
        }
        System.out.println();
    }
}


class Que_2
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.printEvenNumbers(20);
    } 
}