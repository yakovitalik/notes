// Программа демонстрирует двухмерный массив

using System;

namespace Program51
{
	class TwoD
	{
		static void Main()
		{
			int t, i;
			int[,] table = new int[3, 4];

			for(t = 0; t < 3; ++t)
			{
				for(i = 0; i < 4; ++i)
				{
					table[t, i] = (t*4) + i + 1;
					Console.WriteLine(table[t,i] + " ");
				}
				Console.WriteLine();
			}
			
			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}