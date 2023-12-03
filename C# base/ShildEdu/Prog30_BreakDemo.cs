// Применение оператора break для выхода из цикла

using System;

namespace Program30
{
	public class BreakDemo
	{
		public static void Main(string[] args)
		{
			// Использовать оператор break для выхода из этого цикла
			for(int i = -10; i < 10; i++)
			{
				// завершить цикл, как только i станет положительным
				if(i > 0) break;	
				Console.Write(i + " ");
			}

			Console.WriteLine("Готово!");

			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}