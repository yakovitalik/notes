// Программа создает и выводит символьную строку

using System;

namespace Program1
{
	class StringDemo
	{
		static void Main()
		{
			char[] charray = { 'Э', 'т', 'о', '', 'с', 'т', 'р', 'о', 'к', 'а' };

			string str1 = new string(charray);
			string str2 = "Еще одна строка.";

			Console.WriteLine(str1);
			Console.WriteLine(str2);
			
			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}