// Простой пример иерархии классов

using System;

namespace Program101
{
    // Класс для двухмерных объектов
    class TwoDShape
    {
        public double Width;
        public double Height;

        public void ShowDim()
        {
            Console.WriteLine("Ширина и высота равны " + 
                Width + " и " + Height);
        }
    }
    // Класс Triangle, производный от класса TwoDShape
    class Triangle : TwoDShape
    {
        public string Style;        // тип треугольника

        // Возвратить площадь треугольника
        public double Area()
        {
            return Width * Height / 2;
        }

        // Показать тип треугольника
        public void ShowStyle()
        {
            Console.WriteLine("Треугольник" + Style);
        }
    }
	class Shapes
	{
		static void Main()
		{
			Triangle t1 = new Triangle();
            Triangle t2 = new Triangle();

            t1.Width = 4.0;
            t1.Height = 4.0;
            t1.Style = "равнобедренный";

            t2.Width = 8.0;
            t2.Height = 12.0;
            t2.Style = "прямоугольный";

            Console.WriteLine("Сведения об объекте t1: ");
            t1.ShowStyle();
            t1.ShowDim();
            Console.WriteLine("Площадь равна " + t1.Area());

            Console.WriteLine();

            Console.WriteLine("Сведения об объекте t2: ");
            t2.ShowStyle();
            t2.ShowDim();
            Console.WriteLine("Площадь равна " + t2.Area());

            Console.WriteLine();

			
			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}