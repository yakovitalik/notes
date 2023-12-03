package arrayList;
import java.util.*;

/**
* В этой программе демонстрируется 
* применение класса ArrayListTest
* @version 18.0.2.1 2022-09-08
* @author Vitaliy Yakovlev
*/

public class ArrayListTest
{
	public static void main(String[] args)
	{
		// заполнить ссылочный массив staff тремя
		// объектами типа Employee
		ArrayList<Employee> staff = new ArrayList<>();
		
		staff.add(new Employee("Carl Cracker", 75000,  1987, 12, 15));
		staff.add(new Employee("Harry Hacker", 50000,  1989, 10, 1));
		staff.add(new Employee("Tony Tester", 40000,  1990, 3, 15));
		
		// поднять всем рабочим зарплату на 5%
		for(Employee e : staff)
			e.raiseSalary(5);
		
		// Вывести данные обо всех объектах типа Employee
		for(Employee e : staff)
			System.out.println("name=" + e.getName + ", salary=" 
					+ e.getSalary() + ", hireDay=" + e.getHireDay());
	}
}

