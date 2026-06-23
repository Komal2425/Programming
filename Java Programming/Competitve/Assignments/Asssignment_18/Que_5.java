//Write a Program to check whether a number is positive,negative or zero.

class Logic
 {
    void checkSign(int num) 
    {
        // Check if the number is greater than zero
        if (num > 0)
         {
            System.out.println(num + " is a positive number.");
         } 

        // Check if the number is less than zero
        else if (num < 0) 
        {
            System.out.println(num + " is a negative number.");
        } 
        
        // If it's neither, it must be zero
        else 
        {
            System.out.println("The number is zero.");
        }
    }
}

class Que_5
 {
    public static void main(String A[]) 
    {
        Logic obj = new Logic();
        
        // Testing with the provided assignment value (-8)
        obj.checkSign(-8);
    }
}
