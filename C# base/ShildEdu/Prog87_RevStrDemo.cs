﻿// Программа выводит символьную строку в обратном порядке, используя рекурсию

using System;

namespace Program87
{
	class RevStr
	{
		// Вывести символьную строку в обратном порядке
		public void DisplayRev(string str)
		{
			if(str.Length > 0)
				DisplayRev(str.Substring(1, str.Length-1));
			else return;

			Console.Write(str[0]);
		}
	}

	class RevStrDemo
	{
		static void Main()
		{
			string s = "Это тест";
			RevStr rsOb = new RevStr();

			Console.WriteLine("Исходная строка: " + s);

			Console.WriteLine("Перевернутая строка: ");
			rsOb.DisplayRev(s);

			Console.WriteLine();
			
			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}