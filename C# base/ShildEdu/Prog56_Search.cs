// Поиск в массиве с помощью оператора цикла foreach
using System;

namespace Program1
{
	class Search
	{
		static void Main()
		{
			int[] nums = new int[10];
			int val;
			bool found = false;

			// задать первоначальные значения элементов массива nums
			for(in i = 0; i < 10; i++)			
				nums[i] = i;

			val = 5;

			// Использовать цикл foreach для поиска заданного значения
			// в массиве nums
			foreach(int x in nums)
			{
				if(x == val)
				{
					found = true;
					break;
				}
			}
			
			if(found)
				Console.WriteLine("Значение найдено!");

			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}