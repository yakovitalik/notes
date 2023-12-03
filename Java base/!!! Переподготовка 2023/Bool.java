// операторы сравнений и логические операторы

import java.util.*;

public class Bool {
	public static void main(String[] args) {
		Random rand = new Random(47);
		
		int i = rand.nextInt(100);
		int j = rand.nextInt(100);
		
		System.out.println("i = " + i);
		System.out.println("j = " + j);
		System.out.println("i > j is " + (i > j));
		System.out.println("i < j is " + (i < j));
		System.out.println("i >= j is " + (i >= j));
		System.out.println("i <= j is " + (i <= j));
		System.out.println("i == j is " + (i == j));
		System.out.println("i != j is " + (i != j));
		
		// B Java целое число (int) не может
		// интерпретироваться как логический тип (boolean)
		//! print("i && 3' is " + (i && j));
		//! print("i || j is " + (i || j))j 
		//! print("!i is " + !i); 
		print("(i < 10) && (j < 10) is "
				+ ((i < 10) && (j < 10)) ); 
		print("(i < 10) || (j < 10) is "
				+ ((i < 10) || (j < 10)) );
	}
}