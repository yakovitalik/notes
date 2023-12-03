// В этой программе создаются два объекта класса Vehicle
class Vehicle {
int passengers; // количество пассажиров
int fuelcap; // емкость топливного бака
int mpg; // потребление топлива в миллях на галлон }

//В этом классе определяется объект типа Vehicle
class TwoVehicles {
public static void main (String args[]) {
Vehicle minivan = new Venicle ();
Venicle sportscars = new Vehicle ();
int range1, range2;

// присваивание значений полям объекта minivan
minivan.passengers = 7;
minivan.fuelcap = 16;
minivan.mpg = 21;

// присваивание значений полям объекта sportscar
sportscar.passengers = 2;
sportscar.fuelcap = 14;
sportscar.mpg = 12;

// расчет дальности поездкт с полным баком горючего
range1 = minivan.fuelcap * minivan.mpg;
range2 = sportscar.fuelcap * sportscar.mpg;
System.out.println ("Мини-фургон может перевезти " + minivan.passengers + "пассажиров на расстояние " + range1 + "миль."); 
System.out.println ("Спортивный автомобиль может перевезти " + sportscar.passengers + "пассажиров на расстояние " + range2 + "миль."); 
}
}
