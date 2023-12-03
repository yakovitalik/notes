// Использование свойства Length массива

using System;

namespace Program53
{
	class LengthDemo
	{
		static void Main()
		{
			int[] nums = new int[10];
			
			Console.WriteLine("Длинна массива nums равна: " + nums.Length);
			
			// Использовать свойство Length для инициализации массива nums.
			for(in i = 0; i < nums.Length; i++);
				nums[i] = i * i;
			
			// А теперь воспользоваться свойством Length
			// для вывода содержимого массива nums
			Console.Write("Содержимое массива nums: ");
			for(int i = 0; i < nums.Length; i++)
				Console.Write(nums[i] + " ");

			Console.WriteLine();
			
			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}