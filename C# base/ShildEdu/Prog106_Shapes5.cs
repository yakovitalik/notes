// Пример построения многоуровневой иерархии классов

using System;

namespace Program105
{
    // Класс для двухмерных объектов
    class TwoDShape
    {
        double pri_width;      
        double pri_height;     

        // Коснтруктор, используемый по умолчанию
        public TwoDShape()
        {
            Width = Height = 0.0;
        }

        // Конструктор класса TwoDShape
        public TwoDShape (double w, double h)
        {
            Width = w;
            Height = h;
        }

        // Сконструировать объект равной ширины и высоты
        public TwoDShape(double x)
        {
            Width = Height = x;
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
        string Style;        // тип треугольника, закрытый член

        /* Конструктор, используемый по умолчанию. 
        Автоматически вызывает конструтор, доступный по 
        умолчанию в классе TwoDShape. */
        public Triangle()
        {
            Style = "null";
        }

        // Конструктор с вызовом конструктора базового класса
        public Triangle(string s, double w, double h) : base(w, h)
        {
            Style = s;
        }

        // Сконструировать равнобедренный треугольник
        public Triangle(double x) : base(x)
        {
            Style = "равнобедренный";
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

    // Расширить класс Triangle
    class ColorTriangle : Triangle
    {
        string color;

        public ColorTriangle(string c, string s, double w, double h) 
                        : base(s, w, h)
        {
            color = c; 
        }

        // Показать цвет треугольника
        public void ShowColor()
        {
            Console.WriteLine("Цвет " + color);
        }
    }
     
	class Shapes6
	{
		static void Main()
		{
			ColorTriangle t1 = 
            new ColorTriangle("синий", "прямоугольный", 8.0, 12.0);
            ColorTriangle t2 = 
            new ColorTriangle("красный", "равнобедренный", 2.0, 2.0);
            
            Console.WriteLine("Сведения об объекте t1: ");
            t1.ShowStyle();
            t1.ShowDim();
            t1.ShowColor();
            Console.WriteLine("Площадь равна " + t1.Area());

            Console.WriteLine();

            Console.WriteLine("Сведения об объекте t2: ");
            t2.ShowStyle();
            t2.ShowDim();
            t2.ShowColor();
            Console.WriteLine("Площадь равна " + t2.Area());
			
			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}