package abstractClasses;

/**
* В этой программе демонстрируется применение
* абстрактных классов
* @version 18.0.2.1 2022-09-07
* @author Vitaliy Yakovlev
*/

public class PersonTest
{
	public static void main(String[] args)
	{
		Person[] people = new Person[2];
		
		// заполнить массив people объектами
		// типа Student и Employee
		people[0] = new Employee("Harry Hacker", 50000, 1989, 10, 1);
		people[1] = new Student("Maria Moris", "computer science");
		
		// вывести имена и описание всех лиц, 
		// представленных объектами типа Person
		for(Person p : people)
			System.out.println(p.getName() + ", " + p.getDescripsoin());
	}
}

