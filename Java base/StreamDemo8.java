// Использвоание итератора с потоком

import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.stream.Stream;

class StreamDemo8 {
	public static void main(String[] args) {
		
		// Создать список строк
		List<String> myList = new ArrayList<>();
		myList.add("Alpha");
		myList.add("Beta");
		myList.add("Gamma");
		myList.add("Delta");
		myList.add("Phi");
		myList.add("Omega");

		// Получить поток для ArrayList
		Stream<String> myStream = myList.stream();

		// Получить итератор для потока
		Iterator<String> iterator = myStream.iterator();

		// Пройти по элементам в потоке
		while(iterator.hasNext()) {
			System.out.println(iterator.next());
		}
	}
}