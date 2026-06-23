//Write a Program to print all odd numbers up to N

class Logic
 {
    void printOddNumbers(int n) 
    {
        for (int i = 1; i <= n; i++) 
        {
            if (i % 2 != 0) 
            {
                System.out.print(i + " ");
            }
        }
        System.out.println();
    }
}


class Que_3
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.printOddNumbers(20);
    } 
}