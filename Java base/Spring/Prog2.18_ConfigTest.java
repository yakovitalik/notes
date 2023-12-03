
/*
* Тестирование конфигурации Spring в метод main
*/

public class Main
{
	public static void main(String[] args)
	{
		var context = new AnnotationConfigApplicationContext(
			ProjectConfig.class);
			
		Parrot p = context.getBean(Parrot.class);
		System.out.println(p);		// выводит в консоль стандартное представление
									// экземпляра String, полученное из контекста String
		
		System.out.println(p.getName());	// выводит в консоль null, поскольку мы не дали
											// кличку этому попугаю, добавленному в контексте Spring
	}
}