import java.util.*;

/**
* В этой программе демонстрируется 
* конструирование объектов
* @version 18.0.2.1 2022-09-02
* @author Vitaliy Yakovlev
*/

public class ConstructorTest
{
	public static void main(String[] args)
	{
		// заполнить массив staff тремя объектами типа Employee
		for (Employee e : staff)
			System.out.println("name=" + e.get.Name() + ", id="
				+ e.getId() + ", salary=" + e.getSalary());
	}
}

class Employee
{
	private static int nextId;
	private int id;
	private String name = "";	// инициализация поля экземпляра
	private double salary;
	
	// Статический блок инициализации
	static
	{
		var generator = new Random();
		// задать произвольное число 0 - 999 в поле nextId
		nextId = generator.nextInt(10000);
	}
	
	// Блок инициализации объекта
	{
		id = nextId;
		nextId++;
	}
	
	// три перегружаемых конструктора
	public Employee(String n, double s)
	{
		name = n;
		salary = s;
	}
	
	public Employee(double s)
	{
		// вызвать конструктор Employee(String, double)
		this("Employee #" + nextId, s)
	}
	
	// конструктор без аргументов
	public Employee()
	{
		// поле name инициализируется пустой строкой ""
		// поле salary не устанавливается явно
		// а инициализируется нулем
		// поле id инициализируется в блоке инициализации
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
}