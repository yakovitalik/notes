// Программа демонстрирует использование типа decimal для расчета скидки

using System;

namespace Program8
{
	public class UseDecimal
	{
		public static void Main(string[] args)
		{
			decimal price;
			decimal discount;
			decimal discounted_price;

			// Рассчитать цену со скидкой
			price = 19.95m;
			discount = 0.15m;		// скидка 15%
			
			discounted_price = price - (price * discount);

			Console.WriteLine("Цена со скидкой: $" + discounted_price);
			
			
			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}