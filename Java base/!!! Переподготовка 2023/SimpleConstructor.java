// демонстрация простого конструктора
import com.bruceekel.simpletest.*;

class Rock {
	Rock(){		// это и есть конструктор
		System.out.print("Rock ");
	}
}

public class SimpleConstructor {
	public static void main(String[] args) {
		for(int i = 0; i < 10; i++) {
			new Rock();
		}
	}
}