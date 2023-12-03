// Программа показывает инициализацию массива и вычисляет среднее
// арифметическое ряда значений

using System;

namespace Program50
{
	class AvgArray2
	{
		static void Main()
		{
			int[] nums = { 99, 10, 100, 18, 78, 23, 63, 9, 87, 49 };
			int avg = 0;

			for(int i = 0; i < 10; i++)
				avg += nums;
			avg /= 10;

			Console.WriteLine("Среднее: " + avg)
			
			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}