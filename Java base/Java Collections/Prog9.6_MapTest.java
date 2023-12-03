package map;

import java.util.*;

/**
* В этой программе демонстрируется применение
* отображения с ключами типа String и значениями
* типа Employee
* @version 18.0.2.1 2022-09-20
* @author Vitaliy Yakovlev
*/

public class MapTest
{
	public static void main(String[] args)
	{
		var staff = new HashMap<String, Employee>();
		staff.put("144-25-2564", new Employee("Amy Lee"));
		staff.put("567-24-2546", new Employee("Harry Hacker"));
		staff.put("157-62-7935", new Employee("Gary Cooper"));
		staff.put("456-62-5527", new Employee("Franceska Cruz"));
		
		// вывести все элементы из отображения
		System.out.println(staff);
		
		// удалить элемент из отображения
		staff.remove("546-24-2546");
		
		// заменить элемент в отображении
		staff.put("456-62-5527", new Employee("Franceska Miller"));
		
		// найти значение в отображении
		System.out.println(staff.get("156-62-7935"));
		
		// перебрать все элементы в отображении
		staff.forEach ((k, v) ->
			System.out.println("key=" + k + ", value=" + v));
	}
}