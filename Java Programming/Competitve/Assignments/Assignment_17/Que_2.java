class Logic 
{
    void checkPalindrome(int num)
     {
        int reverse = 0;
        int temp = num;
        
        while (temp != 0) 
        {
            int digit = temp % 10;
            reverse = (reverse * 10) + digit;
            temp = temp / 10;
        }
        
        if (num == reverse) 
        {
            System.out.println(num + " is a palindrome.");
        } 
        else 
        {
            System.out.println(num + " is not a palindrome.");
        }
    }
}

class Que_2
 {
    public static void main(String args[])
     {
        Logic obj = new Logic();
        obj.checkPalindrome(121); // Output: 121 is a palindrome.
     }
}
