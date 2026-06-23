//Write a program to calculate the power of a number using loops

class Logic
{
    void calculatePower(int base, int exp)
    {
        long result = 1;

        for (int i = 1; i <= exp; i++)
        {
            result = result * base;
        }

        System.out.println(base + " raised to the power of " + exp + " is: " + result);
    }
}

class Que_5
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.calculatePower(2, 5);
    }
}
