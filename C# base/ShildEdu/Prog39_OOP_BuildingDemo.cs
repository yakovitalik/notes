// Добавление методов в класс Building

using System;

namespace Program39
{
	class Building
	{
		public int Floors;		// количество этажей
		public int Area;		// общая площадь здания
		public int Occupants;		// количество жильцов

		// Вывести площадь на одного человека
		public void AreaPerPerson()
		{
			Console.WriteLine(" " + Area / Occupants + 
			" приходится на одного человека");
		}
	}

	// Использование метода AreaPerPerson()
	class BuildingDemo
	{
		static void Main(string[] args)
		{
			Building house = new Building();
			Building office = new Building();	
			
			// присвоить значения полям в объекте house
			house.Occupants = 4;
			house.Area = 2500;
			house.Floors = 2;

			// присвоить значения полям в объекте office
			house.Occupants = 25;
			house.Area = 4200;
			house.Floors = 3;

			Console.WriteLine("Дом имеет:\n" + 
			house.Floors + " этажа\n " + house.Occupants + " жильца\n " + 
			house.Area + " кв.футов общей площади, из них\n ");
			house.AreaPerPerson();

			Console.WriteLine();

			Console.WriteLine("Учреждение имеет:\n" + 
			office.Floors + " этажа\n " + office.Occupants + " работников\n " + 
			office.Area + " кв.футов общей площади, из них");
			office.AreaPerPerson();
			
			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}