﻿// Программа демонстрирует управление оператором switch посредством строк

using System;

namespace Program1
{
	class StringSwitch
	{
		static void Main()
		{
			string[] strs = { "один", "два", "три", "два", "один" };
		
			foreach(string s in strs)
			{
				switch(s)
				{
					case "один":
						Console.Write(1);
						break;
					case "два":
						Console.Write(2);
						break;
					case "три":
						Console.Write(3);
						break;
				}
			}

			Console.WriteLine();
			
			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}