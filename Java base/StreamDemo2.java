import java.util.ArrayList;
import java.util.Optional;

import javax.swing.text.html.Option;

/**
* Демонстрируется использование метода reduce()
* 
* @version 17.0 2024-01-11
* @author Vitaliy Yakovlev
*/

public class StreamDemo2
{
	public static void main(String[] args)
	{
		// Создать список значений типа Integer
		ArrayList<Integer> myList = new ArrayList<>();
		myList.add(7);
		myList.add(18);
		myList.add(10);
		myList.add(24);
		myList.add(17);
		myList.add(5);

		// Два способа получения целочисленного произведения элементов
		// в myList с использованием reduce()
		Optional<Integer> productObj = myList.stream().reduce((a, b)-> a * b);
		if (productObj.isPresent()) {
			System.out.println("Произведение как Optional: " + productObj.get());
		}

		int product = myList.stream().reduce(1, (a, b) -> a * b);
		System.out.println("Произведение как int: " + product);
	}
}