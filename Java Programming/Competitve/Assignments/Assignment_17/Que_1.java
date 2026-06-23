//write a program to find the sum of digits of a number

class Logic
{
   void sumOfDigits(int num)
    {
        int sum = 0;
        int temp = num;
        
        while (temp != 0)
         {
            sum = sum + (temp % 10);
            temp = temp / 10;
        }
        System.out.println("Sum of digits is: " + sum);
    }
}
class Que_1
{
     public static void main(String args[])
     {
        Logic obj = new Logic();
        obj.sumOfDigits(1234);
     }
}
