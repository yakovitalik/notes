// Демонстрация приминения условного оператора if

using System;
namespace Programs3
{
	public class IfDemo
	{
		public static void Main(string[] args)
		{
			int a, b, c;

			a = 2;
			b = 3;

			if (a < b) Console.WriteLine("a меньше b");
			
			// не будет выведено
			if (a == b) Console.WriteLine("Этого никто не увидит");

			Console.WriteLine();

			c = a - b;		// c содержит -1
			Console.WriteLine("c содержит -1");

			if (c >= 0) Console.WriteLine("значение c неотрицательно");
			if (c < 0) Console.WriteLine("значение c отрицательно");

			Console.WriteLine();

			c = b - a;		// c содержит 1
			Console.WriteLine("c содержит 1");

			if (c >= 0) Console.WriteLine("значение c неотрицательно");
			if (c < 0) Console.WriteLine("значение c отрицательно");

			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}