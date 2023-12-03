// Изящная обработка исключительной ситуации и 
// продолжить выполнение программы

using System;

namespace Program116
{
	class ExcDemo3
	{
		static void Main()
		{
			int[] numer = { 4, 8, 16, 32, 64, 128};
			int[] denom = { 2, 0, 4, 4, 0, 8};

			for(int i = 0; i < numer.Length; i++)
			{
				try
				{
					Console.WriteLine(numer[i] + " / " + 
					denom[i] + " равно " + numer[i] / denom[i]);
				}
				catch (DivideByZeroException)
			{
				// Перехватить исключение
				Console.WriteLine("делить на нуль нельзя!");
			}

			}

			
			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}