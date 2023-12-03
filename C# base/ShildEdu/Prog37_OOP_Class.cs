// Программа, в которой используется класс Building

using System;

namespace Program37
{
	public class Building
	{
		public int Floors;		// количество этажей
		public int Area;		// общая площадь здания
		public int Occupants;		// количество жильцов
	}

	// в этом классе объявляется объект типа Building
	public class BuildingDemo
	{
		public static void Main(string[] args)
		{
			Building house = new Building();	// создать объект типа Building
			int areaPP;				// площадь на одного человека

			// присвоить значения полям в объекте house
			house.Occupants = 4;
			house.Area = 2500;
			house.Floors = 2;

			// вычислить площадь на одного человека
			areaPP = house.Area / house.Occupants;

			Console.WriteLine("Дом имеет:\n" + 
			house.Floors + " этажа\n " + house.Occupants + " жильца\n " + 
			areaPP + " приходится на одного человека");
			
			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}