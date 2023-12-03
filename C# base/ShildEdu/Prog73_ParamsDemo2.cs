// Программа демонстрирует применение модификатора params
/* Используется обычный параметр вместе с параметром переменной
длинны типа params */

using System;

namespace Program73
{
	class MyClass
	{
		public void ShowArgs(string msg, params int[] nums)
		{
			Console.Write(msg + " ");
			

			foreach(int i in nums)
				Console.Write(i + " ");

			Console.WriteLine();
		}
	}

	class ParamsDemo2
	{
		static void Main()
		{
			MyClass ob = new MyClass();
			
			ob.ShowArgs("Это ряд целых чисел", 1, 2, 3, 4, 5);
			ob.ShowArgs("А это еще два целых числа", 17, 20);
			
			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}