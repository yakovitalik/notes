// Использование оператора цикла foreach

using System;

namespace Program1
{
	class ForeachDemo
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
			}

			Console.WriteLine("Сумма равна: " + sum);
			
			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}