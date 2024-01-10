import java.util.*;

// Программа демонстрирует консольный ввод

public class InputTest {
	public static void main(String[] args) {
		
		Scanner in = new Scanner(System.in);
		
		// получить первую вводимую строку
		System.out.println("What is your name? ");
		String name = in.nextLine();
		
		// получить вторую вводимую строку
		System.out.println("How old are you? ");
		int age = in.nextInt();
		
		// вывести результат на консоль
		System.out.println("Hello, " + name 
				+ " . Next year, you'll be " + (age + 1));
				
		// для чтения паролей используется другой класс - Console
		Console cons = System.console();
		String username = cons.readLine("User name: ");
		char[] passwd = cons.readPassword("Password: ");
		/*
		* Из соображений безопасности, пароль возвращается в виде массива символов, 
		* а не в виде символьной строки. После обработки пароля следует немедленно перезаписать
		* элементы массива значением заполнителя.
		*/
	}
}