package interfaces;

import java.util.*;

/**
* В этой программе демонстрируется применение
* интерфейса Comparable
* @version 18.0.2.1 2022-09-12
* @author Vitaliy Yakovlev
*/

public class EmployeeSortTest
{
	public static void main(String[] args)
	{
		var staff = new Employee[3];
		
		staff[0] = new Employee("Harry Hacker", 35000);
		staff[1] = new Employee("Carl Cracher", 75000);
		staff[2] = new Employee("Tony Tester", 38000);
		
		Array.sort(staff);
		
		// вывести данные обо всех объектах типа Employee
		for(Employee e : staff)
			System.out.println("name=" + e.getName() 
					+ ", salary=" + e.getSalary());
		
	}
}