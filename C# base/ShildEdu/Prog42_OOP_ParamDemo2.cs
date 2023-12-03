// Добавить метод, принимающий два аргумента

using System;

namespace Program42
{
	class ChkNum
	{
		// Возвратить значение true, если значение
		// праметра x окажется простым числом
		public bool IsPrime(int x)
		{
			if(x <= 1) return false;

			for(int i = 2; i <= x / i; i++)
				if((x % i) == 0) return false;

			return true;
		}

		// Возвратить наименьший общий множитель
		public int LeastComFactor(int a, int b)
		{
			int max;
			
			if(IsPrime(a) || IsPrime(b)) return 1;

			max = a < b ? a : b;

			for(int i = 2; i <= max / 2; i++)
				if(((a % i) == 0) && ((b % i) == 0)) return i;
			return 1;
		}
	}
	
	class ParmDemo
	{
		static void Main()
		{
			ChkNum ob = new ChkNum();
			int a, b;

			for(int i = 2; i < 10; i++)
			{
				if(ob.IsPrine(i)) Console.WriteLine(i + " простое число.");
				else Console.WriteLine(i + " непростое число.");
			}
			
			a = 7;
			b = 8;

			Console.WriteLine("Наименьший общий множитель чисел " + 
			a + " и " + b + " равен " + 
			ob.LeastComFactor(a, b));
			
			a = 100;
			b = 75;

			Console.WriteLine("Наименьший общий множитель чисел " + 
			a + " и " + b + " равен " + 
			ob.LeastComFactor(a, b));

			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}