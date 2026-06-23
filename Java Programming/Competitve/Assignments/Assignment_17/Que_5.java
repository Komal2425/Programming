class Logic
{
    void printTable(int num)
    {
        // Loop from 1 to 10 to generate the table
        for (int i = 1; i <= 10; i++)
        {
            System.out.println(num + " * " + i + " = " + (num * i));
        }
    }
}

class Que_5
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.printTable(5);
    }
}
