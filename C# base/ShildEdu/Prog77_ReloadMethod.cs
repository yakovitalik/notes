// Программа демонстрирует перегрузку методов

using System;

namespace Program77
{
	class Overload
	{
		public void OvlDemo()
		{
			Console.WriteLine("Без параметров");
		}

		// перегрузка метода OvlDemo() с одним целочисленным параметром
		public void OvlDemo(int a)
		{
			Console.WriteLine("Один параметр: " + a);
		}

		// Перегрузка метода OvlDemo() с двумя целочисленными параметрами
		public int OvlDemo(int a, inr b)
		{
			Console.WriteLine("Два параметра: " + a + " " + b);
			return a + b;
		}

		// Перегрузка метода OvlDemo() с двумя параметрами типа double
		public double OvlDemo OvlDemo(double a, double b)
		{
			Console.WriteLine("Два параметра типа double: " + a + " " + b);
			return a + b;
		}
	}

	class OvlDemo
	{
		static void Main()
		{
			Overload ob = new Overload();
			int resI;
			double resD;

			// вызвать все варианты метода OvlDemo()
			ob.OvlDemo();
			Console.WriteLine();

			ob.OvlDemo(2);
			Console.WriteLine();

			resI = ob.OvlDemo(4, 6);
			Console.WriteLine("Результат вызова метода ob.OvlDemo(4, 6): " + resI);
			Console.WriteLine();

			resD = ob.OvlDemo(1.1, 2.32);
			Console.WriteLine("Результат вызова метода ob.OvlDemo(1.1, 2.32): " + resD);
			
			
			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}