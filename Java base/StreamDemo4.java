import java.util.ArrayList;
import java.util.stream.Stream;

/**
* В этой программе демонстрируется применение
* cсопоставления одного потока с другим(map)
* 
* @version 17.0 2024-01-11
* @author Vitaliy Yakovlev
*/

public class StreamDemo4
{
	public static void main(String[] args)
	{
		// Список значений типа double
		ArrayList<Double> myList = new ArrayList<>();
		myList.add(7.0);
		myList.add(18.0);
		myList.add(10.0);
		myList.add(24.0);
		myList.add(17.0);
		myList.add(5.0);

		// Сопоставить квадратные корним элементов myList с новым потоком
		Stream<Double> sqrtRootStream = myList.stream().map((a)-> Math.sqrt(a));

		// Найти произведение квадратных корней
		double productOfRoots = sqrtRootStream.reduce(1.0, (a, b)-> a * b);

		System.out.println("Произведение квадратных корней: " + productOfRoots);
	}	
}