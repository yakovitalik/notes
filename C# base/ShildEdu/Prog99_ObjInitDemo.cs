// Применение инициализаторов  вобъектах свойств

using System;

namespace Program99
{
	class MyClass
	{
		// Теперь это свойства
		public int Count { get; set; }
		public string Str { get; set; }
	}
	class ObjInitDemo
	{
		static void Main()
		{
			// сконструировать объект типа MyClass с помощью инициализаторов
			MyClass obj = new MyClass { Count = 100, Str = "Тестирование" };

			Console.WriteLine(obj.Count + " " + obj.Str);
			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}