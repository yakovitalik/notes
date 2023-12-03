// Простой конструктор

using System;

namespace Program40
{
	class MyClass
	{
		public int x;

		public MyClass()
		{
			x = 10;
		}

	}

	
	class ConsDemo
	{
		static void Main()
		{
			MyClass t1 = new MyClass();
			MyClass t2 = new MyClass();

			Console.WriteLine(t1.x + " " + t2.x);

			
			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}