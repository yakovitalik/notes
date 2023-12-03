// Программа демонстрирует применение инициализаторов объектов

using System;

namespace Program80
{
	class MyClass
	{
		public int Count;
		public string Str;
	}

	class ObjInitDemo
	{
		static void Main()
		{
			// Сконструирвоать объект типа MyClass, используя инициализаторы объектов.
			MyClass obj = new MyClass { Count = 100, Str = "Тестирование" };

			Cobsole.WriteLine(obj.Count + " " + obj.Str);
			
			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}