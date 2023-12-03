// Программа демонстрирует применение типа bool

using System;

namespace Program10
{
	public class BoolDemo
	{
		public static void Main(string[] args)
		{
			bool b;
			b = false;
			
			Console.WriteLine("b равно " + b);
			b = true;
			Console.WriteLine("b равно " + b);

			// Логическое значение может управлять оператором if
			if(b) Console.WriteLine("Выполняется.");

			b = false;
			if(b) Console.WriteLine("Не выполняется.");

			// Результатом выполнения оператора отношения
			// является логическое значение
			
			Console.WriteLine("10 > 9 равно" + (10 > 9));
			
			
			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}