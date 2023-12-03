// Проcстой пример применения свойства

using System;

namespace Program96
{
	class SimpProp
	{
		int prop;			// поле, управляемое свойством MyProp

		public SimpProp() { prop = 0; }

		// Это свойство обеспечивает доступ к закрытой переменной экземпляра
		// prop. Оно допускает присваивание только положительных значений.
		public int MyProp
		{
			get 
			{
				return prop;
			}
			set 
			{
				if(value >= 0) prop = value;
			}
		}

	}

	// Продемонстрировать применение свойства
	class PropetryDemo
	{
		static void Main()
		{
			SimpProp ob = new SimpProp();

			Console.WriteLine("Первоначальное значение ob.MyProp: " + ob.MyProp);

			ob.MyProp = 100;			// присвоить значение

			Console.WriteLine("Текущее значение ob.MyProp: " + ob.MyProp);

			// Переменнной prop нельзя присвоить отрицательное значение
			Console.WriteLine("Попытка присвоить значение " + 
			"-10 свойству ob.MyProp");

			ob.MyProp = -10;
			Console.WriteLine("Текущее значение ob.MyProp: " + ob.MyProp);
			
			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}