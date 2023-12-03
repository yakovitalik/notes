// Программа демонстрирует использование элементов char для управления switch

using System;

namespace Program24
{
	public class SwitchDemo2
	{
		public static void Main(string[] args)
		{
			char ch;

			for(ch = 'A'; ch <= 'E'; ch++)
				switch(ch)
				{
					case 'A':
						Console.WriteLine("ch содержит A");
					case 'B':
						Console.WriteLine("ch содержит B");
						break;
					case 'C':
						Console.WriteLine("ch содержит C");
						break;
					case 'D':
						Console.WriteLine("ch содержит D");
						break;
					case 'E':
						Console.WriteLine("ch содержит E");
						break;
				}
			
			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}