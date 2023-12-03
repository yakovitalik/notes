// Использование поля типа static для подсчета экземпляров
// существующих объектов

using System;

namespace Program89
{
	class CountInst
	{
		static int count = 0;

		// инкременировать подсчет когда создается объект
		public CountInst()
		{
			count++;
		}

		// декрементировать подсчет, когда уничтожается объект
		~CountInst()
		{
			count--;
		}

		public static int GetCount()
		{
			return count;
		}
	}

	class CountDemo
	{
		static void Main()
		{
			ConstInst ob;

			for(int i = 0; i < 10; i++)
			{
				ob = new CountInst();
				Console.WriteLine("Текущий подсчет: " + CountInst.GetCount());
			}
			
			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}