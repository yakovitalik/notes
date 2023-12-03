// Применение оператора break для выхода из цикла do-while

using System;

namespace Program30
{
	public class BreakDemo2
	{
		public static void Main(string[] args)
		{
			int i = -10;
		
			do {
				if(i > 0) break;
				Console.Write(i + " ");
				i++;
			} while(i <= 10);

			Console.WriteLine("Готово!");
			

			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}