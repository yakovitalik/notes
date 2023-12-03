/* Программа, в которой используется класс Vehicle*/
class Vehicle {
int passengers; // Количество пассажиров
int fuelcap; // емкость топливного бака
int mpg; // потребление топлива в миллях на галлон
}

//В этом классе объявляется объект типа Vehicle
class VenicleDemo {
public static void main (String args[]) {
Vehicle minivan = new Venicle ();
int range;

// Присваивание значений полям в объекте minivan
minivan.passengers = 7;
minivan.fuelcap = 16;
minivan.mpg = 21;

// Расчет дальности поездки с полным баком горючего
range = minivan.fuelcap * minivan.mpg;
System.out.printl ("Мини-фургон может перезти" + minivan.passengers + "пассажиров на расстояние " + range + "миль");
}
}