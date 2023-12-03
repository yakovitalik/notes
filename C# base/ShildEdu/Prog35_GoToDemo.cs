// Применение оператора goto в операторе switch

using System;

namespace Program35
{
	public class GoToDemo
	{
		public static void Main(string[] args)
		{
			for(int i = 1; i < 5; i++)
			{
				switch(i)
				{
					case 1:
						Console.WriteLine("В ветви case 1");
						goto case 3;
					case 2:
						Console.WriteLine("В ветви case 2");
						goto case 1;
					case 3:
						Console.WriteLine("В ветви case 3");
						goto default;
					default:
						Console.WriteLine("В ветви default");
						break;
				}
				Console.WriteLine();
				
			}
	
			// goto case 1;	// ошибка! Безусловный переход к оператору switch недопустим!
			
			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}