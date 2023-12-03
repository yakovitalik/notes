// Использование цикла while для вычисления порядка величины целого числа

using System;

namespace Program27
{
	public class WhileDemo
	{
		public static void Main(string[] args)
		{
			int num;
			int mag;
			
			num = 435679;
			mag = 0;

			Console.WriteLine("Число: " + num);

			while(num > 0)
			{
				mag++;
				num /= 10;
			}
		
			Console.WriteLine("Порядок величины: " + mag);
			
			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}