// Использование while для вычисление целых степеней числа 2

using System;

namespace Program28
{
	public class Power
	{
		public static void Main(string[] args)
		{
			int e;
			int result;
			
			for(int i = 0; i < 10; i++)
			{
				result = 1;
				e = i;

				while(e > 0)
				{
					result *= 2;
					e--;
				}

				Console.WriteLine("2 в степени " + i + " равно " + result);
			}
			
			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}