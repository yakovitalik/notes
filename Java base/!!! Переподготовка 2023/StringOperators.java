// Строковые операторы

public class StringOperators {
	public static void main(String[] args) {
		int x = 0, y = 1, z = 2;
		
		String s = "x, y, z ";
		System.out.println(s + x + y + z);
		System.out.println(x + " " + s);	// Преобразует x в String
		s += "(summed) = ";					// оператор конкатенации
		System.out.println(s + (x + y + z));
		System.out.println("" + x);			// Сокращение для Integer.toString()
	}
}