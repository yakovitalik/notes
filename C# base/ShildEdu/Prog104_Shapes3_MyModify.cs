﻿// Добавление конструктора в класс Triangle

using System;

namespace Program104
{
    // Класс для двухмерных объектов
    class TwoDShape
    {
        double pri_width;       // теперь это закрытая переменная
        double pri_height;      // теперь это закрытая переменная

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
    // Класс Triangle, производный от класса TwoDShape
    class Triangle : TwoDShape
    {
        string Style;        // тип треугольника

        // Конструктор
        public Triangle(string s, double w, double h)
        {
            Width = w;      // инициализировать член базового класса
            Height = h;     // инициализировать член базового класса
            Style = s;      // инициализировать член производного класса
        }

        // Возвратить площадь треугольника
        public double Area()
        {
            return Width * Height / 2;
        }

        // Показать полные сведения о треугольнике
        public void ShowAll()
        {

            Console.WriteLine("Треугольник " + Style);
            ShowDim();
            Console.WriteLine("Площадь равна " + Area());
        }
    }
    class Shapes3
    {
        static void Main()
        {
            Triangle t1 = new Triangle("равнобедренный", 4.0, 4.0);
            Triangle t2 = new Triangle("прямоугольный", 8.0, 12.0);

            // Вывод сведений об объекте
            Console.WriteLine("Сведения об объекте t1: ");
            t1.ShowAll();

            Console.WriteLine();

            // Вывод сведений об объекте
            Console.WriteLine("Сведения об объекте t2: ");
            t2.ShowAll();

            Console.WriteLine();

            // Для того чтобы консоль сразу не закрывалась
            Console.WriteLine("Нажмите <Enter> для выхода...");
            Console.Read();
        }
    }
}