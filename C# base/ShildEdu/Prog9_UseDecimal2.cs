/* Программа показывает применение decimal для расчета будущей стоимости
капиталовложений */

using System;

namespace Program1
{
	public class UseDecimal2
	{
		public static void Main(string[] args)
		{
			decimal amount;
			decimal rate_of_return;
			int years, i;

			amount = 1000.0M;
			rate_of_return = 0.07M;
			years = 10;
		
			Console.WriteLine("Первоначальные капиталовложения: $" + amount);
			Console.WriteLine("Норма прибыли: " + rate_of_return);
			Console.WriteLine("В течение " + years + " лет");

			for(i = 0; i < years; i++)
				amount = amount + (amount * rate_fo_return);
			
			Console.WruteLine("Будущая стоимость равна $" + amount);
			
			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}