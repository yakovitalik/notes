// Использование необязательного аргумента, чтобы упростить вызов метода

using System;

namespace Program1
{
	class UseOptArgs
	{
		// Вывести на экран символьную строку полностью или частично
		static void Display(string str, int start = 0, int stop = -1)
		{
			if(stop < 0)
				stop = str.Length;

			// Проверить условие выхода за заданые пределы
			if(stop > str.Length | start > stop | start < 0)
				return;

			for(int i = start; i < stop; i++)
				Console.Write(str[i]);
	
			Console.WriteLine();
		}

		static void Main()
		{
			Display("Это простой тест");
			Display("Это простой тест", 12);
			Display("Это простой тест", 4, 12);
			
			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}