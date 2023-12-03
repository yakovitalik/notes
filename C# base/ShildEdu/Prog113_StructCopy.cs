// Скопировать структуру

using System;

namespace Program113
{
	// Определить структуру.
	struct MyStruct
	{
		public int x;
	}

	// Продемонстрировать присваивание структуры
	class StructAssignment
	{
		static void Main()
		{
			MyStruct a;
			MyStruct b;

			a.x = 10;
			b.x = 20;

			Console.WriteLine("a.x {0}, b.x {1}", a.x, b.x);

			a = b;
			b.x = 30;
			Console.WriteLine("a.x {0}, b.x {1}", a.x, b.x);
			
			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}