import com.horstman.corejava.*;
// в этом пакете определен класс Employee

import static java.lang.System.*;

/**
* В этой программе демонстрируется применение
* пакетов
* @version 18.0.2.1 2022-09-02
* @author Vitaliy Yakovlev
*/

public class PackageTest
{
	public static void main(String[] args)
	{
		// здесь не нужно указывать полное имя
		// класса com.horstman.corejava.Employee
		// поскольку используется оператор import
		Employee harry = new Employee("Harry Hacker", 
			50000, 1989, 10, 1);
		
		harry.raiseSallary(5);
		
		// здесь не нужно указывать полное имя Sytstem.out,
		// поскольку используется оператор static import
		out.println("name=" + harry.getName() + ", salary="
				+ harry.getSalary());
	}
}