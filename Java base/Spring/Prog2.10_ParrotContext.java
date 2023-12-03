
/*
* Обращение к экземпляру Parrot из контекста
*/

public class Main
{
	public static void main(String[] args)
	{
		var context = new AnnotationConfigApplicationContext(
			ProjectConfig.class);
			
			
		// получаем ссылку на бин типа Parrot из контекста Spring
		Parrot p = context.getBean(Parrot.class);
		
		System.out.println(p.getName());
	}
}