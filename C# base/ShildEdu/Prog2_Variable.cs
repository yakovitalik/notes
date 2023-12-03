using System;
namespace Programs2
{
	public class Program2
	{
		static void Main(string[] args)
		{
			int x;			// объявление переменной
			int y;			// объявление переменной
			x = 100;		// переменной x присваивается значение 100
			
			Console.WriteLine("x содержит " + x);

			y = x / 2;
			
			Console.Write("y содержит x/2: ");
			Console.WriteLine(y);

			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}