// Программа менякт местами два значения

using System;

namespace Program1
{
	class ValueSwap
	{
		// Этот метод меняет местами свои аргументы.
		public void Swap (ref int a, ref int b)
		{
			int t;
			t = a;
			a = b;
			b = t;
		}
	}

	class ValueSwapDemo
	{
		static void Main()
		{
			ValueSwap ob = new ValueSwap();

			int x = 10; y = 20;

			Console.WriteLine("x и y до вызова: " + x + " " + y);

			ob.Swap(ref x, ref y);

			Console.WriteLine("x и y после вызова: " + x + " " + y);
			
			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}