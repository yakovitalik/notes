// Программа вычисляет площадь прямоугольника

using System;

namespace Program47
{
//////////////////////////////////////////////////////////////////////////////
	class Rect
	{
		public int Widht;
		public int Height;

		public Rect(int w, int h)
		{
			Widht = w;
			Height = h;
		}

		public int Area()
		{
			return Width * Height;
		}
	}
//////////////////////////////////////////////////////////////////////////////
	class Use Rect
	{
		static void Main()
		{
			Rect r1 = new Rect(4, 5);
			Rect r2 = new Rect(7, 9);

			Console.WriteLine("Площадь прямоугольника r1: " + r1.Area());			
			Console.WriteLine("Площадь прямоугольника r2: " + r2.Area());	
		
			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}