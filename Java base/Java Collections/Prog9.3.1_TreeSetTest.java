package treeSet;

import java.util.*;

/*
В примере программы из листинга TreeSetTest строятся два древовидных множества объектов
типа Item. Первое из них сортируется по номеру изделия в каталоге, т.е. в порядке
сортировки, выбираемом по умолчанию для объектов типа Item, а второе сортируется
по описанию изделия с помощью специального компаратора. 
Само же изделие и его номер описываются в классе Item в файле Item.
*/
/**
* В этой программе множество изделий
* путем сравнения их описаний
* @version 18.0.2.1 2022-09-20
* @author Vitaliy Yakovlev
*/

public class TreeSetTest
{
	public static void main(String[] args)
	{
		var parts = new TreeSet<Item>();
		parts.add(new Item("Toaster", 1234));
		parts.add(new Item("Widget", 4562));
		parts.add(new Item("Modem", 9912));
		System.out.println(parts);
		
		var sortByDescription = new TreeSet<Item>
			(Comparator.comparing(Item::getDescription));
			
		sortByDescription.addAll(parts);
		System.out.println(sortByDescription);
	}
}