// Программа демонстрирует применение операторов отношения и логических операторов

using System;

namespace Program20
{
	public class RelLogsOps
	{
		public static void Main(string[] args)
		{
			int i, j;
			bool b1, b2;
			
			i = 10;
			j = 11;
			if(i < j) Console.WriteLine("i < j");
			if(i <= j) Console.WriteLine("i <= j");
			if(i != j) Console.WriteLine("i != j");
			if(i == j) Console.WriteLine("Нельзя выполнить");
			if(i >= j) Console.WriteLine("Нельзя выполнить");
			if(i > j) Console.WriteLine("Нельзя выполнить");

			b1 = true;
			b2 = false;
			if(b1 & b2) Console.WriteLine("Нельзя выполнить");
			if(!(b1 & b2)) Console.WriteLine("!(b1 & b2) - true");
			if(b1 | b2) Console.WriteLine("b1 | b2 - true");
			if(b1 ^ b2) Console.WriteLine("b1 ^ b2 - true");
			
			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}