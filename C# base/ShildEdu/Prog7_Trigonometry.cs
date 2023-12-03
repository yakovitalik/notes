// Программа демонстрирует применение тригонометрических функций

using System;

namespace Program7
{
	public class Trigonometry
	{
		public static void Main(string[] args)
		{
			Double theta;			// угол в радианах
			
			for(theta = 0.1; theta <= 1.0; theta += 0.1)
			{
				Console.WriteLine("Синус угла " + theta + 
				" равен " + Math.Sin(theta));
				Console.WriteLine("Косинус угла " + theta + 
				" равен " + Math.Cos(theta));
				Console.WriteLine("Тангенс угла " + theta + 
				" равен " + Math.Tan(theta));
			}
			
			Console.WriteLine();
			
			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}