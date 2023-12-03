// Программа демонстрирует применение команды форматирования

using System;

namespace Program11
{
	public class DisplayOptions
	{
		public static void Main(string[] args)
		{
			int i;

			Console.WriteLine("Число\tКвадрат\tКуб");

			for(i=0; i < 10; i++)
				Console.WriteLine("{0}\t{1}\t{2}", i, i*i, i*i*i);
			
			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}