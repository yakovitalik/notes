// Программа демонстрирует деление по модулю (%)

using System;

namespace Program18
{
	public class ModDemo
	{
		public static void Main(string[] args)
		{
			int iresult, irem;
			double dresult, drem;

			iresult = 10 / 3;
			irem = 10 % 3;

			dresult = 10.0 / 3.0;
			drem = 10.0 % 3.0;
	
			Console.WriteLine("Результат и остаток от деления 10/3: " + 
			iresult + " " + irem);
			Console.WriteLine("Результат и остаток от деления 10/3: " + 
			dresult + " " + drem);
			
			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}