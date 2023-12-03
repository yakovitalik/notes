// Применение оператора continue

using System;

namespace Program34
{
	public class ContinueDemo
	{
		public static void Main(string[] args)
		{
			// вывести четные числа от 0 до 100
			for(int i = 0; i <= 100; i++)
			{
				if((i % 2) != 0) continue;	// перейти к следующему шагу итерации
				Console.WriteLine(i);
			}
			
			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}