// Программа демонстрирует отличия между префиксной и постфиксной
// формами формами оператора инкремента (++)

using System;

namespace Program19
{
	public class IncDemo
	{
		public static void Main(string[] args)
		{
			int x, y;
			int i;

			x = 1;
			y = 0;
			Console.WriteLine("Ряд чисел, полученных " + 
			"с помощью оператора y = y + x++;");
	
			for(i = 0; i < 10; i++)
			{
				y = y + x++;	// постфиксная форма оператора ++
				Console.WriteLine(y + " ");
			}
			
			Console.WriteLine();
			
			x = 1;
			y = 0;
			Console.WriteLine("Ряд чисел, полученных " + 
			"с помощью оператора y = y + ++x;");

			for(i = 0; i < 10; i++)
			{
				y = y + ++x;	// префиксная форма оператора ++
				Console.WriteLine(y + " ");
			}
			
			Console.WriteLine();

			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}