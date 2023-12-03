// Программа демонстрирует одномерный массив

using System;

namespace Program48
{
	class ArrayDemo
	{
		static void Main()
		{
			int[] sample = new int[10];
			int i;

			for(i = 0; i < 10; i++)
				sample[i] = i;

			for(i = 0; i < 10; i++)
				Console.WriteLine("sample [" + i + "]: " + sample[i]);
			
			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}