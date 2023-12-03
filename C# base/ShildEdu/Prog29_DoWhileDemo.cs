// Программа демонстрирует применение цикла do-while
// Отображает цифры целого числа в обратном порядке

using System;

namespace Program29
{
	public class DoWhileDemo
	{
		public static void Main(string[] args)
		{
			int num, nextdigit;

			num = 198;
	
			Console.WriteLine("Число: " + num);
			Console.WriteLine("Число в обратном порядке: ");

			do {
				nextdigit = num % 10;
				Console.Write(nextdigit);	
				num = num / 10;
			} while(num > 0);

			Console.WriteLine();
			
			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}