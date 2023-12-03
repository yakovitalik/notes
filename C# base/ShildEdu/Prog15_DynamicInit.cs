// Программа демонстрирует динамическую инициализацию переменной
// (при помощи выражения)

using System;

namespace Program15
{
	public class DynInit
	{
		public static void Main(string[] args)
		{
			// Длинна сторон прямоугольника
			double s1 = 4.0;
			double s2 = 5.0;

			// Инициализировать переменную hypot динамически
			double hypot = Mat.Sqrt( (s1 * s1) + (s2 * s2) );

			Console.WriteLine("Гипотенуза треугольника равна со сторонами " + 
			s1 + " и " + s2 + " равна ");

			Console.WriteLine("{0:#.###}.", hypot);
			
			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}