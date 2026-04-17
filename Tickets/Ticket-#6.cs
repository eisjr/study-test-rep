using System;
					
class Test
{
    static void Main()
    {
        int c = 0;
        int max = c;

        int col = 0;

        while (col < 3)
        {
            if (int.TryParse(Console.ReadLine(), out c))
            {
                 if (c > max) { max = c; }
                col++;
            }
            else
            {
                Console.WriteLine("Вы ввели не число");
                break;
            }
        }
        Console.WriteLine("максимальное число " + max);
    }
}