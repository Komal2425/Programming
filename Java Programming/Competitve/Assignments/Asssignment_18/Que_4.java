//Write a program to find sum of even and odd digits separately in a number

class Logic
 {
    void sumEvenOddDigits(int num)
     {
        int evenSum = 0, oddSum = 0;
        int temp = Math.abs(num); // Handle negative numbers

        while (temp > 0)
         {
            int digit = temp % 10;

            if (digit % 2 == 0)
             {
                evenSum += digit;
             } 
            else 
             {
                oddSum += digit;
             }
            temp = temp / 10;
        }
        System.out.println("Sum of even digits: " + evenSum);
        System.out.println("Sum of odd digits: " + oddSum);
    }
}


class Que_4
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.sumEvenOddDigits(123456);
    }
}