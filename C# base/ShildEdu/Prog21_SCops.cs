﻿// Программа демонстрирует применение укорочаенных логических операторов

using System;

namespace Program1
{
	public class SCops
	{
		public static void Main(string[] args)
		{
			int n, d;

			n = 10;
			d = 2;
			if(d != 0 && (n % d) == 0)
				Console.WriteLine(n + " делится нацело на " + d);

			d = 0;	// задать нулевое значение переменной d

			// d = 0, поэтому второй операнд не вычисляется
			if(d != 0 && (n % d) == 0)
				Console.WriteLine(n + " длится нацело на " + d);

			// Если теперь попытаться сделать то же  самое бз укороченного
			// логического оператора, то возникает ошибка деления на нуль.
			if (d != 0 & (n % d) == 0)
				Console.WriteLine(n + " делится нацело на  " + d);
			
			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}