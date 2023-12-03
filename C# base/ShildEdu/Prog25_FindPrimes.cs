// Применение цикла for для выяснения, является ли число простым
// Если оно непростое, вывести наибольший его множитель

using System;

namespace Program25
{
	public class FindPrimes
	{
		public static void Main(string[] args)
		{
			int num;
			int i;
			int factor;
			bool isprime;

			for(num = 2; num < 20; num++)
			{
				isprime = true;
				factor = 0;

				// Выяснить, делится ли значение переменной num нацело
				for(i = 2; i <= num / 2; i++)
				{
					if((num % i) == 0)
					{
						// значение переменной num делится нацело
						// следовательно это непростое число
						isprime = false;
						factor = i;
					}
				}
				
				if(isprime)
					Console.WriteLine(num + "простое число.");
				else
					Console.WriteLine("наибольший множитель числа " + num +
					" равен " + factor);
			}
			
			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}