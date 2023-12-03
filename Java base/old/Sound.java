/* Программа расчитывает рассотяние до очага грозы по звуку */
class Sound {
public static void main (String args []) {
double time1, speed, length;
time1 = 7.2; // время после вспышки
speed = 330; // метров в секунду
length = time1 * speed;
System.out.println ("Гроза находится на расстоянии" + length + "метров от вас");
}
}