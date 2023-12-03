// Применение оператора break во вложенных циклах

using System;

namespace Program33
{
	public class BreakNested
	{
		public static void Main(string[] args)
		{
			for(int i = 0; i < 3; i++)
			{
				Console.WriteLine("Подсчет во внешнем цикле: " + i);
				Console.Write("Подсчет во внутреннем цикле: ");

				int t = 0;
				while(t < 100)
				{
					if(t == 10) break;	// прервать цикл, если t = 10
					Console.Write(t + " ");
					t++;
				}
				Console.WriteLine(0);
			}
			Console.WriteLine("Циклы завершены.");

			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}