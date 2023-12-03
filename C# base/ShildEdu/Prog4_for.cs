// Демонстрация приминения цикла for

using System;
namespace Program4
{
	public class ForDemo
	{
		public static void Main(string[] args)
		{
			int count;

			for(count = 0; count < 5; count++)
				Console.WriteLine("Это подсчет: " + count);
			Console.WriteLine("Готово!");

			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}