/**
* В этой программе демонстрируются 
* статические методы
* @version 18.0.2.1 2022-08-31
* @author Vitaliy Yakovlev
*/

public class StaticTest
{
	public static void main(String[] args)
	{
		// Заполнить массив staff тремя 
		// объектами типа Employee
		Employee[] staff = new Employee[3];
		
		staff[0] = new Employee("Tom", 40000);
		staff[1] = new Employee("Dick", 60000);
		staff[2] = new Employee("Harry", 65000);
		
		// Вывести данные обо всех объектах типа Employee
		for(Employee e : staff)
		{
			e.setId();
			System.out.println("name=" + e.getName()
			+ ",id=" + e.getId() + ", salary=" + e.getSalary());
		}
		
		int n = Employee.getNextId();	// вызвать статический метод
		System.out.println("Next available id= " + n);
	}
}

class Employee
{
	private static int nextId = 1;
	
	private String name;
	private double salary;
	private int id;
	
	public Employee(String n, double s)
	{
		name = n;
		salary = s;
		id = 0;
	}
	
	public String getName()
	{
		return name;
	}
	
	public double getSalary()
	{
		return salary;
	}
	
	public int getId()
	{
		return id;
	}
	
	public void setId()
	{
		id = nextId;		// установить следующий 
							// доступный идентификатор
		nextId++;
	}
	
	public static int getNextId()
	{
		return nextId;		// возвратить статическое поле
	}
	
	public static void main()
	// выполнить модульный тест
	{
		var e = new Employee("Harry", 50000);
		System.out.println(e.getName() + " " + e.getSalary());
	}
}