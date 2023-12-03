// Возврат объекта из метода

using System;

namespace Program74
{
	class Rect
	{
		int width;
		int heigth;
		
		public Rect(int w, int h)
		{
			width = w;
			heigth = h;
		}

		public int Area()
		{
			return width * height;
		}

		public void Show()
		{
			Console.WriteLine(width + " " + heigth);
		}

		/*  Метод возвращает прямоугольник со сторонами, пропорционально 
		увеличенными на указанный коэффициентпо сравнению с вызывающим 
		объектом прямоугольника */
		public Rect Enlarge(int factor)
		{
			return new Rect(width * factor, heigth * factor)
		}
	}

	class ReturnObj
	{
		static void Main()
		{
			Rect r1 = new Rect(4, 5);
			
			Console.Write("Размеры прямоугольника r1: ");
			r1.Show();
			Console.WriteLine("Площадь прямоугольника r1: " + r1.Area());

			Console.WriteLine();

			// Создать прямоугольник в два раза больший прямоугольника r1
			Rect r2 = r1.Enlarge(2);

			Console.Write("Размеры прямоугольника r2: ");
			r2.Show();
			Console.WriteLine("Площадь прямоугольника r2: " + r2.Area());
			
			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}