// Использование модификатора static

using System;

namespace Program88
{
	class StaticDemo
	{
		// Пермеенная типа static
		public static int Val = 100;

		// Метод тип аstatic
		public static int ValDiv2()
		{
			return val / 2;
		}
	}

	class SDemo
	{
		static void Main()
		{
			Console.WriteLine("Исходное значение переменной " + 
			"StaticDemo.Val равно " + StaticDemo.Val);

			StaticDemo.Val = 8;

			Console.WriteLine("Текущее значение переменной " + 
			"StaticDemo.Val равно " + StaticDemo.Val);

			Console.WriteLine("StaticDemo.ValDiv2(): " + StaticDemo.ValDiv2());
			
			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}