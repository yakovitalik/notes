// Программа выводит все аргументы командной строки

using System;

namespace Program84
{
	class CLDemo
	{
		static void Main(string[] args)
		{
			Console.WriteLine("Командная строка содержит " + 
			args.Length + " аргумента.");

			Console.WriteLine("Вот они: ");
			for(int i = 0; i < args.Length; i++)
				Console.WriteLine(args[i]);
			
			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}