// Демонстрирует возможности интерфейса ListIterator

import typeinfo.pets.*;
import java.util.*;

public class ListInteration {
	public static void main(String[] args) {
		List<Pet> pets = Pets.arrayList(8);
		ListIterator<Pet> it = pets.listIterator();
		
		while(it.hasNext())
			System.out.print(it.next() + ", " + it.nextIndex() + 
				", " + it.previousIndex() + "; ");
		System.out.println();
		
		// В обратном направлении
		while(it.hasPrevious())
			System.out.print(it.previous().id() + " ");
		System.out.println();
		System.out.println(pets);
		
		it = pets.listIterator(3);
		while(it.hasNext()) {
			it.next();
			it.set(Pets.randomPet());
		}
		System.out.println(pets);
	}
}