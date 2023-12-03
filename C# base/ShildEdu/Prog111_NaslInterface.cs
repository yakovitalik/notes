// Пример наследования интерфейсов.

using System;

namespace Program111
{
	public interface IA
	{
		void Meth1();
		void Meth2();
	}

	// В базовый интерфейс включены методы Meth1() и Meth2().
	// а в производный интерфейс добавлен еще метод - Meth3().
	public interface IB : IA
	{
		void Meth3();
	}

	// В этом классе должны быть реализованы все методы интерфейсов IA и IB.
	class MyClass : IB
	{
		public void Meth1()
		{
			Console.WriteLine("Реализовать методы Meth1().");
		}

		public void Meth2()
		{
			Console.WriteLine("Реализовать методы Meth2().");
		}

		public void Meth3()
		{
			Console.WriteLine("Реализовать методы Meth3().");
		}
	}

	class IFExtend
	{
		static void Main()
		{
			MyClass ob = new MyClass();

			ob.Meth1();
			ob.Meth2();
			ob.Meth3();
			
			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}