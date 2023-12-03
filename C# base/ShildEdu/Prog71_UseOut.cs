// Использование модификатора параметра out

using System;

namespace Program1
{
	class Decompose
	{
		/* Разделить числовое значение с плавающей точкой на целую
		 и дробные части */
		public int GetParts(double n,out double frac)
		{
			int whole;

			whole = (int) n;
			frac = n - whole;	// передать дробную часть числа через параметр frac
			return whole;		// возвратить целую часть числа 
		}
	}
	
	class UseOut
	{
		static void Main()
		{
			Decompose ob = new Decompose();
			int i;
			double f;

			i = ob.GetParts(10.125, out f);

			Console.WriteLine("Целая часть числа равна " + i);
			Console.WriteLine("Дробная часть числа равна " + f);
			
			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}