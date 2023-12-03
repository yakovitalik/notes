﻿// Программа демонстрирует применение модификатора params

using System;

namespace Program72
{
	class Min
	{
		public int MinVal(params int[] nums)
		{
			int m;

			if(nums.Length == 0)
			{
				Console.WriteLine(Ошиба! Нет аргументов.);
				return 0;
			}

			m = nums[0];
			for(int i = 1; i < nums.Length; i++)
				if(nums[i] < m) m = nums[i];

				return m;
		}
	}

	class ParamsDemo
	{
		static void Main()
		{
			min ob = new Min();
			int min;
			int a = 10, b = 20;

			// Вызвать метод с двумя значениями
			min = ob.MinVal(a, b);
			Console.WriteLine("Наименьшее значение равно: " + min);

			// Вызвать метод с тремя значениями
			min = ob.MinVal(a, b, -1);
			Console.WriteLine("Наименьшее значение равно: " + min);

			// Вызвать метод с пятью значениями
			min = ob.MinVal(18, 23, 3, 14,25);
			Console.WriteLine("Наименьшее значение равно: " + min);

			// Вызвать метод с массивом целых значений
			int[] args = { 45, 67, 34, 9, 112, 8 };
			min = ob.MinVal(args);
			Console.WriteLine("Наименьшее значение равно: " + min);
			
			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}