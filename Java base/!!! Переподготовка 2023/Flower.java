// Вызов конструкторов с использование this

public class Flower {
	int petalCount = 0;
	String s = "initial value";
	
	Flower(int petals) {
		petalCount = petals;
		System.out.println("Конструктор с параметром int, petalCount = " 
				+ petalCount);
	}
	
	Flower(String ss) {
		System.out.println("Конструктор с параметром String, s = " + ss);
		s = ss;
	}
	
	Flower(String s, int petals) {
		this(petals);
		//! this(s);	// вызов другого конструктора запрещен!
		this.s = s;		// другое использование this
		System.out.println("Аругменты String и int");
	}
	
	Flower() {
		this("hi", 47);
		System.out.println("Конструктор по умолчанию, без аргументов");
	}
	
	void printPetalCount() {
		//! this(11);	// разрешается только в конструкторах
		System.out.println("petalCount = " + petalCount + " s = " + s);
	}
	
	public static void main(String[] args) {
		Flower x = new Flower();
		x.printPetalCount();
	}
}