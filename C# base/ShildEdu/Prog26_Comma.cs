// Программа использует запятые в операторе цикла for

using System;

namespace Program26
{
	public class Comma
	{
		public static void Main(string[] args)
		{
			int i, j;

			for(i=0, j=10; i < j; i++, j--)
				Console.WriteLine("i  и j: " + i + " " + j);
			
			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}