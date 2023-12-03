// Полезное практическое применение оператора goto

using System;

namespace Program36
{
	public class GoToDemo2
	{
		public static void Main(string[] args)
		{
			int i = 0, j = 0, k = 0;

			for(i = 0; i < 10; i++)
			{
				for(j = 0; j < 10; j++)
				{
					for(k = 0; k < 10; k++)
					{
						Console.WriteLine("i, j, k: " + i + " " + 
						j + " " + k);
						if(k == 3) goto stop;
					}
				}
			}

			stop:
				Console.WriteLine("Остановлено! i, j, k : " + i + ", " + j + ", " + k);


			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}