// Использование оператора break для преждевременного завершения цикла foreach

using System;

namespace Program55
{
	class ForeachDemo2
	{
		static void Main()
		{
			int sum = 0;
			int [] nums = new int[10];
			
			// задать первоначальные значения элементов массива nums
			for(int i = 0; i < 10; i++)
				nums[i] = i;

			// использовать цикл foreach для вывода значений 
			// элементов массива и подсчета их суммы
			foreach(int x in nums)
			{
				Console.WriteLine("Значение элемента равно: " + x);
				sum += x;
				if(x == 4) break;	// прервать цикл, как только индекс массива достигнет 4
			}

			Console.WriteLine("Сумма первых 5 элементов равна: " + sum);
			
			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}