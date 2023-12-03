// Программа демонстрирует необязательные аргументы

using System;

namespace Program81
{
	class OptionArgDemo
	{
		static void OptArgMeth(int alpha, int beta = 10; int gamma = 20)
		{
			Console.WriteLine("Это аргументы alpha, beta и gamma: " + 
			alpha + " " + beta + " " + gamma);
		}

		static void Main()
		{
			// Передать все аргументы явным образом
			OptArgMeth(1, 2, 3);

			// Сделать аргумент gamma необязательным
			OptArgMeth(1, 2);

			// Сделать оба аргумента beta и  gamma необязательными
			OptArgMeth(1);
			
			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}