package abstractClasses;

public class Student extends Person
{
	private String major;
	
	/*
	* @param name Имя студента
	* @param major Специализация студента
	*/
	
	public Student(String name, String major)
	{
		// передать строку name конструктору суперкласса
		// в качестве его параметра
		super(name);
		this.major = major;
	}
	
	public String getDescription()
	{
		return "a student majoring in " + major);
	}