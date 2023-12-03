// Программа выполняет расчет радтуса окружности по площади круга

using System;

namespace Program6
{
	public class FindRadius
	{
		public static void Main(string[] args)
		{
			Double r;
			Double area;

			area = 10.0;

			r = Math.Sqrt(area / 3.1416);
		
			Console.WriteLine("Радиус равен " + r);
			
			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}