// Фабрика класса

using System;

namespace Program90
{
	class MyClass
	{
		int a, b;			// закрытые члены класса

		// Создать фабрику для класса MyClass.
		static public MyClass Factory(int i, int j) 
		{
			MyClass t = new MyClass();
			
			t.a = i;
			t.b = j;

			return t;		// возвратить объект
		}

		public void Show()
		{
			Console.WriteLine("a и b: " + a + " " + b);
		}
	}

	class MakeObjects
	{
		static void Main()
		{
			int i, j;

			// сформировать объекты, используя фабрику класса 
			for(i = 0; j = 10; i < 10; i++, j--)
			{
				MyClass ob = My.Class.Factory(i, j);	// создать объект
				ob.Show();
			}

			Console.WriteLine();
			
			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}