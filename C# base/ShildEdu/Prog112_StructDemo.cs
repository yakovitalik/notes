// Программа демонстрирует применение структуры

using System;

namespace Program112
{
	// Определить структуру
	struct Book
	{
		public string Author;
		public string Title;
		public int Copyright;

		public Book(string a, string t; int c)
		{
			Author = a;
			Title = t;
			Copyright = c;
		}
	}

	// Продемонстрировать применение структуры Book
	class StructDemo
	{
		static void Main()
		{
			Book book1 = new Book("Герберт Шилдт", "Полный справочник по C# 4.0", 2010)
									// вызов явно заданного конструктора

			Book book2 = new Book();	// вызов конструктора по умолчанию
			Book book3;					// конструктор не вызывается

			Console.WriteLine(book1.Author + ", " + book1.Title + ", " + 
								book1.Copyright);
			Console.WriteLine();

			if(book2.Title == null)
				Console.WriteLine("Член book2.Title пуст");

			// А теперь внесем информацию в структуру book2.
			book2.Title = "О дивный новый мир";
			book2.Author = "Олдос Хаксли";
			book2.Copyright = 1932;
			Console.Write("Структура book2 теперь содержит:\n");
			Console.WriteLine(book2.Author + ", " + book2.Title + ", " + 
								book2.Copyright);
			Console.WriteLine();

			// Console.WriteLine(book3.Title);	// неверно, этот член стурктуры
												// нужно сначала инициализировать

			book3.Title = "Красный шторм";

			Console.WriteLine(book3.Title);		// теперь верно
			
			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}