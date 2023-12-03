// Параметризированный конструктор

using System;

namespace Program45
{
	class MyClass
	{
		public int x;

		public MyClass(int i)
		{
			x = i;
		}

	}

	
	class ParmConsDemo
	{
		static void Main()
		{
			MyClass t1 = new MyClass(10);
			MyClass t2 = new MyClass(88);

			Console.WriteLine(t1.x + " " + t2.x);

			
			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}