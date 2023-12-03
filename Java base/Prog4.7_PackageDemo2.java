package com.horstman.corejava;
// классы из этого файла входят в указанный пакет

import static java.time.*;

/**
* В этой программе демонстрируется применение
* пакетов2
* @version 18.0.2.1 2022-09-02
* @author Vitaliy Yakovlev
*/

public class Employee
{
	private String name;
	private double salary;
	private LocalDate hireDay;
	
	public Employee(String name, double salary, int year, 
			int month, int day)
	{
		this.name = name;
		this.salary = salary;
		hireDay = LocalDate.of(year, month, day);
	}
	
	public String getName()
	{
		return name;
	}
	
	public double getSalary()
	{
		return salary;
	}
	
	public LocalDate getHireDay()
	{
		return hireDay;
	}
	
	public void raiseSalary(double byPercent)
	{
		double raise = salary * byPercent / 100;
		salary += raise;
	}
}