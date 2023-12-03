
/*
* Обращение к экземпляру Parrot из контекста
*/

public class Main
{
	public static void main(String[] args)
	{
		var context = new AnnotationConfigApplicationContext(
			ProjectConfig.class);
	}
}