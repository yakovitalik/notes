// Программа демонстрирует применение управляющих 
// последовательностей символов в строковых литералах

using System;

namespace Program1
{
	public class StrDemo
	{
		public static void Main(string[] args)
		{
			Console.WriteLine("Первая строка\tВторая строка\tТретья строка");
			Console.WriteLine("Один\tДва\tТри");
			Console.WriteLine("Четыре\tПять\tШесть");

			// Вставить ковычки
			Console.WriteLine("\"Зачем?\", спросил он.");
			
			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}