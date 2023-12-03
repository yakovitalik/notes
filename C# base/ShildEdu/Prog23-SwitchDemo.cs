// Программа демонстрирует применение оператора switch

using System;

namespace Program23
{
	public class SwicthDemo
	{
		public static void Main(string[] args)
		{
			int i;

			for(i = 0; i < 10; i++)
			{
				switch(i)
				{
					case 0:
						Console.WriteLine("i равно нулю");
						break;
					case 1:
						Console.WriteLine("i равно единице");
						break;
					case 2:
						Console.WriteLine("i равно двум");
						break;
					case 3:
						Console.WriteLine("i равно трем");
						break;
					case 4:
						Console.WriteLine("i равно четырем");
						break;
					default:
						Console.WriteLine("i равно или больше пяти");
				}
			}
			
			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}