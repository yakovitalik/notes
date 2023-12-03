// Передача аргументов обычных типов по значению

using System;

namespace Program67
{
	class Test
	{
		/* Этот метод не оказывает никакого вляиния на аргументы, 
		используемые для его вызова. */
		public void NoChange(int i; int j)
		{
			i = i + j;
			j = - j;
		}
	}

	class CallByValue
	{
		static void Main()
		{
			Test ob = new Test();
			
			int a = 15, b = 20;
			
			Console.WriteLine("a и b до вызова: " + 
			a + " " + b);
			
			ob.NoChange(a, b);

			Console.WriteLine("a и b после вызова: " + 
			a + " " + b);
			
			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}