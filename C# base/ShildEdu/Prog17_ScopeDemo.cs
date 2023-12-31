﻿// Программа демонстрирует область действия кодового блока

using System;

namespace Program17
{
	public class ScopeDemo
	{
		public static void Main(string[] args)
		{
			int x;	// Эта переменная доступна для всего кода внутри метода Main()
			
			x = 10;
			if(x == 10)
			{			// начать новую область действия
				int y = 20;	// эта переменная доступна только в данном кодовом блоке
				
				// Здесь доступны обе переменные, x и y
				
				Console.WriteLine("x и y: " + x + " " + y);
				x = y * 2;
			}
			// y = 100; // Ошибка! Переменная у здесь недоступна

			// А переменная x здесь по прежнему доступна
			Console.WriteLine("x равно " + x);
			
			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}