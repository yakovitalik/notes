// Программа демонстрирует массивы строк

using System;

namespace Program59
{
	class StringArrays
	{
		static void Main()
		{
			string[] str = { "Это", "очень", "простой", "тест." };
		
			Console.WriteLine("Исходный массив: ");
			for(int i = 0; i < str.Length; i++)
				Console.Write(str[i] + " ");
			Console.WriteLine("\n");

			// Изменить строку
			str[1] = "тоже";
			str[3] = "до предела тест!";
			
			Console.WriteLine("Видоизмененный массив: ");
			for(int i = 0; i < str.Length; i++)
				Console.Write(str[i] + " ");
			
			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}