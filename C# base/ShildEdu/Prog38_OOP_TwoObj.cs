// В этой программе создаются два объекта класса Building

using System;

namespace Program37
{
	class Building
	{
		public int Floors;		// количество этажей
		public int Area;		// общая площадь здания
		public int Occupants;		// количество жильцов
	}

	// в этом классе объявляются два объекта типа Building
	class BuildingDemo
	{
		static void Main(string[] args)
		{
			Building house = new Building();
			Building office = new Building();	
			int areaPP;				// площадь на одного человека

			// присвоить значения полям в объекте house
			house.Occupants = 4;
			house.Area = 2500;
			house.Floors = 2;

			// присвоить значения полям в объекте office
			house.Occupants = 25;
			house.Area = 4200;
			house.Floors = 3;

			// вычислить площадь на одного человека в жилом доме
			areaPP = house.Area / house.Occupants;

			Console.WriteLine("Дом имеет:\n" + 
			house.Floors + " этажа\n " + house.Occupants + " жильца\n " + 
			house.Area + " кв.футов общей площади, из них\n " +
			areaPP + " приходится на одного человека");

			// вычислить площадь на одного человека в учреждении
			areaPP = office.Area / office.Occupants;

			Console.WriteLine("Дом имеет:\n" + 
			office.Floors + " этажа\n " + office.Occupants + " работников\n " + 
			office.Area + " кв.футов общей площади, из них\n " +
			areaPP + " приходится на одного человека");
			
			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}