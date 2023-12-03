// Индексаторы совсем необязательно должны оперировать отдельными массивами

using System;

namespace Program95
{
	class PwrOfTwo
	{
		// Доступ к логическому массиву, содержащему степени 
		// числа 2 от 0 до 15

		public int this[int index]
		{
			// вычислить и возвратить степень числа 2
			get
			{
				if((index >= 0) && (index < 16)) return pwr(index);
				else return -1;
			}

			// Аксессор set отстутствует

			inr pwr(int p)
			{
				int result = 1;

				for(int i = 0; i < p; i++)
					result *= 2;
				
				return result;
			}
		}
	}

	class UsePwrOfTwo
	{
		static void Main()
		{
			PwrOfTwo pwr = new PwrOfTwo();

			Console.Write("Первые 8 степеней числа 2: ");
			for(int i = 0; i < 8; i++)
				Console.Write(pwr[i] + " ");
			Console.WriteLine();

			Console.Write("А это некоторые ошибки: ");
			Console.Write(pwt[-1] + " " + pwr[17]);

			Console.WriteLine();
			
			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}