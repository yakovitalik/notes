// Применение статического конструктора

using System;

namespace Program91
{
	class Cons
	{
		public static int alpha;
		public int beta;

		// Статический конструктор
		static Cons()
		{
			alpha = 99;
			Console.WriteLine("В статическом конструкторе");
		}

		// Конструктор экземпляра 
		public Cons()
		{
			beta = 100;
			Console.WriteLine("В конструкторе экземпляра");
		}
	}

	class ConsDemo
	{
		static void Main()
		{
			Cons ob = new Cons();
			Console.WriteLine("Cons.alpha: " + Cons.alpha);
			Console.WriteLine("ob.beta: " + ob.beta);
			
			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}