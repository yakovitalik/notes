// Простой пример применения параметра

using System;

namespace Program41
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
	}
	
	class ParmDemo
	{
		static void Main()
		{
			ChkNum ob = new ChkNum();

			for(int i = 2; i < 10; i++)
			{
				if(ob.IsPrine(i)) Console.WriteLine(i + " простое число.");
				else Console.WriteLine(i + " непростое число.");
			}
			
			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}