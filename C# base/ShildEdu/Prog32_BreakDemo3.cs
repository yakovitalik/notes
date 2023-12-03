// Выявляет наименьший множитель числа

using System;

namespace Program30
{
	public class FindSmallestFactor
	{
		public static void Main(string[] args)
		{
			int factor = 1;
			int num = -1000;

			for(int i = 2; i <= num / i; i++)
			{
				if((num % i) == 0)
				{
					factor = i;
					break;	// прервать цикл, как только будет 
						// выявлен наименьший множитель числа
				}
			}
			
			Console.WriteLine("Наименьший множитель равен " + factor);

			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}