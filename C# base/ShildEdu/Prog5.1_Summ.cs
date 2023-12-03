// Программа вычисляет сумму и произведение чисел от 1 до 10

using System;

namespace Program1
{
	public class ProdSum
	{
		public static void Main(string[] args)
		{
			int prod;
			int sum;
			int i;
			
			sum = 0;
			prod = 1;

			for(i = 1; i <= 10; i++)
			{
				sum = sum + i;
				prod = prod * i;
			}

			Console.WriteLine("Сумма равна " + sum);
			Console.WriteLine("Произведение равно " + prod);
			
			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}