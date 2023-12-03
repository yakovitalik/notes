// Программа демонстрирует неявно типизированную переменную

using System;

namespace Program15
{
	public class ImplicinlyTypeVar
	{
		public static void Main(string[] args)
		{
			// Эти переменные типизированы неявно. Они отнесены 
			// к типу double, поскольку инициализирующие их 
			// выражения сами относятся к типу double
			var s1 = 4.0;	// Длинны сторон прямоугольника
			var s2 = 5.0;

			// Итак, переменная hypot типизированна неявно и
			// относится к типу double, поскольку результат, 
			// возвращаемый методом Sqrt() имеет тип double
			var hypot = Mat.Sqrt( (s1 * s1) + (s2 * s2) );

			Console.WriteLine("Гипотенуза треугольника равна со сторонами " + 
			s1 + " и " + s2 + " равна ");

			Console.WriteLine("{0:#.###}.", hypot);
			
			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}