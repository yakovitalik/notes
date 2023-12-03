// Программа демонстрации кодового блока для исключения деления на ноль

using System;

namespace Program1
{
	public class BlockDemo
	{
		public static void Main(string[] args)
		{
			int i, j, d;
			
			i = 5;
			j = 10;

			// Адресатом этого оператора if служит кодовый блок
			if(i !=0)
			{
				Console.WriteLine("i не равно нулю");
				d = j / i;
				Console.WriteLine("j / i равно " + d);
				
			}
			
			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}