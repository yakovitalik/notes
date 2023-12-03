// Программа демонстрирует применение многоступенчатой конструкции if-else-if

using System;

namespace Program22
{
	public class IfElseIf
	{
		public static void Main(string[] args)
		{
			int num;

			for(num = 2; num < 12; num++)
			{
				if((num % 2) == 0)
					Console.WriteLine("Наименьший множительчисла " + num + " равен 2.");
				else if((num % 3) == 0)
					Console.WriteLine("Наименьший множительчисла " + num + " равен 3.");
				else if((num % 5) == 0)
					Console.WriteLine("Наименьший множительчисла " + num + " равен 5.");
				else if((num % 7) == 0)
					Console.WriteLine("Наименьший множительчисла " + num + " равен 7.");
				else
					Console.WriteLine(num + "Не делится на 2, 3, 5 или 7.")
			}
			
			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}