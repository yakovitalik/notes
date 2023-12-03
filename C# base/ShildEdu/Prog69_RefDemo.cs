// Использование модификатора ref для передачи знаяения обычного типа по ссылке

using System;

namespace Program69
{
	class RefTest
	{
		// Этот метод изменяет свой аргумент. Обратите 
		// внимание на применение модификатора ref
		public void Sqr(ref int i)
		{
			i = i * i;
		}
	}

	class RefDemo
	{
		static void Main()
		{
			RefTest ob = new RefTest();
			int a = 10;
			
			Console.WriteLine("a до вызова: " + a);

			ob.Sqr(ref a);	// обращаем внимание на применение модификатора ref

			Console.WriteLine("a после вызова: " + a);
			
			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}