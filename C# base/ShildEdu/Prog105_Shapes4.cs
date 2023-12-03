// Добавление конструктора в класс TwoDShape

using System;

namespace Program105
{
    // Класс для двухмерных объектов
    class TwoDShape
    {
        double pri_width;      
        double pri_height;     

        // Конструктор класса TwoDShape
        public TwoDShape (double w, double h)
        {
            Width = w;
            Height = h;
        }

        // Свойства ширины и высоты двухмерного объекта
        public double Width
        {
            get { return pri_width; }
            set { pri_width = value < 0 ? -value : value; }
        }

        public double Height
        {
            get { return pri_height; }
            set { pri_height = value < 0 ? -value : value; }
        }

         public void ShowDim()
        {
            Console.WriteLine("Ширина и высота равны " + 
                Width + " и " + Height);
        }
    }
    // Класс труегольников Triangle, производный от класса TwoDShape
    class Triangle : TwoDShape
    {
        string Style;        // тип треугольника

        // Вызвать конструктор базового класса
        public Triangle(string s, double w, double h) : base(w, h)
        {
            Style = s;
        }

        // Возвратить площадь треугольника
        public double Area()
        {
            return Width * Height / 2;
        }

        // Показать тип треугольника
        public void ShowStyle()
        {
            Console.WriteLine("Треугольник " + Style);
        }
    }
	class Shapes4
	{
		static void Main()
		{
			Triangle t1 = new Triangle("равнобедренный", 4.0, 4.0);
            Triangle t2 = new Triangle("прямоугольный", 8.0, 12.0);

            Console.WriteLine("Сведения об объекте t1: ");
            t1.ShowStyle();
            t1.ShowDim();
            Console.WriteLine("Площадь равна " + t1.Area());

            Console.WriteLine();

            Console.WriteLine("Сведения об объекте t2: ");
            t2.ShowStyle();
            t2.ShowDim();
            Console.WriteLine("Площадь равна " + t2.Area());
			
			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}