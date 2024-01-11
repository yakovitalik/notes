import java.lang.StackWalker.Option;
import java.util.ArrayList;
import java.util.Optional;
import java.util.stream.Stream;

/**
* В этой программе демонстрируется применение
* потоковых операций
* 
* @version 17.0 2024-01-11
* @author Vitaliy Yakovlev
*/

public class StreamDemo
{
	public static void main(String[] args)
	{
		// Создать список значений типа integer
		ArrayList<Integer> myList = new ArrayList<>();
		myList.add(7);
		myList.add(18);
		myList.add(10);
		myList.add(24);
		myList.add(17);
		myList.add(5);

		System.out.println("Исходный список: " + myList);

		// Получаем поток для ArrayList
		Stream<Integer> myStream = myList.stream();

		// Получаем минимальное и максимальное значение
		Optional<Integer> minVal = myStream.min(Integer::compare);
		if(minVal.isPresent()) {
			System.out.println("Минимальное значение: " + minVal.get());
		}

		// Требуется получить новый поток, так как предыдущий вызов min()
		// является заключительной операцией, которая потребляет поток
		myStream = myList.stream();

		Optional<Integer> maxVal = myStream.max(Integer::compare);
		if(maxVal.isPresent()) {
			System.out.println("Максимальное значение: " + maxVal.get());
		}

		// Отсортировать поток с применением sorted()
		Stream<Integer> sortedStream = myList.stream().sorted();

		// Оторбразим отсортированный поток с использованием forEach()
		System.out.print("Отсортированный поток: ");
		sortedStream.forEach((n) -> System.out.print(n + " "));
		System.out.println();

		// Отобразить только нечетные значения с приминением filter()
		Stream<Integer> oddVals = myList.stream().sorted().filter((n)-> (n%2) == 1);
		System.out.print("Нечетные значения: ");
		oddVals.forEach((n)-> System.out.print(n + " "));
		System.out.println();

		// Отобразить только нечетные значения, которые больше 5
		// Здесь 2 операции фильтрования соединены в конвейер
		oddVals = myList.stream().filter((n)-> (n%2) == 1)
				.filter((n)-> n > 5);

		System.out.print("Нечетные значения, которые больше 5: ");
		oddVals.forEach((n)-> System.out.print(n + " "));
		System.out.println();
	}
}