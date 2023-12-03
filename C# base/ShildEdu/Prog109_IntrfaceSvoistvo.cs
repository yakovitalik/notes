// Использование свойства в интерфейсе

using System;

namespace Program109
{
	public interface ISeries
	{
		// Интерфейсное свойство.
		int Next
		{
			get;	// возвратить следующее по порядку число
			set;	// установить следующее число
		};			
	}

	// Реализовать интерфейс ISeries
	class ByTwos : ISeries
	{
		int val;

		public ByTwos()
		{
			val = 0;
		}

		// Получить или установить значение
		public int Next
		{
			get
			{
				val += 2;
				return val;
			}
			set
			{
				val = value;
			}			
		}
	}

	// Продемонстрировать применение интерфейсного свойства
	class SeriesDemo3
	{
		static void Main()
		{
			ByTwos ob = new ByTwos();

			// Получть доступ к последовательному ряду чисел с помощью свойства. 
			for (int i = 0; i < 5; i++)
			{
				Console.WriteLine("Следующее число равно " + ob.Next);
			}
			
			Console.WriteLine("\nНачать с числа 21");
			ob.Next = 21;
			for(int i = 0; i < 5; i++)
				Console.WriteLine("Следующее число равно " + ob.Next);

			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}