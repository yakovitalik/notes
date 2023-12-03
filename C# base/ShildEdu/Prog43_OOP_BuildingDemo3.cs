﻿/* Добавить параметризованный метод, вычисляющий 
максимальное количество человек, которые могут
занимать здание, исходя из заданной минимальной площади 
на одного человека */

using System;

namespace Program40
{
	class Building
	{
		public int Floors;		// количество этажей
		public int Area;		// общая площадь здания
		public int Occupants;		// количество жильцов

		// Возвратить величину площади на одного человека
		public int AreaPerPerson()
		{
			return Area / Occupants;
		}

		// Возвратить максимальное количество человек, занимающих здание,
		// исходя из заданной минимальной площади на одного человека.
		public int MaxOccupant(int minArea)
		{
			return Area / minArea;
		}
	}

	// Использование метода MaxOccupant()
	class BuildingDemo
	{
		static void Main()
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

			Console.WriteLine("Максимальное количество человек в доме, \n" + 
			"если на каждого должно приходиться " + 300 + " кв.футов: " + 
			house.MaxOccupant(300));

			Console.WriteLine("Максимальное количество человек в учреждении, \n" + 
			"если на каждого должно приходиться " + 300 + " кв.футов: " + 
			office.MaxOccupant(300));

			
			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}