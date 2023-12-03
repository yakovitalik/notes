// Демонстрация применения класса ByTwos, реализующего интерфейс.

using System;

namespace Program107
{
	public interface ISeries
	{
		int GetNext();			// возвратить следующее по порядку число
		void Reset();			// перезапустить
		void SetStart(int x);	// задать начальное значение
	}

	class ByTwos : ISeries
	{
		int start;
		int val;

		public ByTwos()
		{
			start = 0;
			val = 0;
		}

		public int GetNext()
		{
			val += 2;
			return val;
		}

		public void Reset()
		{
			val = start;
		}

		public void SetStart(int x)
		{
			start = x;
			val = start;
		}
	}

	class SeriesDemo
	{
		static void Main()
		{
			ByTwos ob = new ByTwos();

			for (int i = 0; i < 5; i++)
			{
				Console.WriteLine("Следующее число равно " + ob.GetNext());
			}

			Console.WriteLine("\nСбросить");
			ob.Reset();
			for(int i = 0; i < 5; i++)
				Console.WriteLine("Следующее число равно " + ob.GetNext());
			
			Console.WriteLine("\nНачать с числа 100");
			ob.SetStart(100);
			for(int i = 0; i < 5; i++)
				Console.WriteLine("Следующее число равно " + ob.GetNext());

			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}