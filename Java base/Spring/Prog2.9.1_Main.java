
/**
* Инициализация контекста Spring на основании
* созданного класса конфигурации
* @version 18 2022-10-04
* @author Vitaliy Yakovlev
* @author yakovitalik@mail.ru
*/

public class Main
{
	public static void main(String[] args)
	{
		var context = new AnnotationConfigApplicationContext(
			ProjectConfig.class);
	}
}