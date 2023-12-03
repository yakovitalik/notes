
/*
* Вывод в консоль значений двух новых бинов
*/

public class Main
{
	public static void main(String[] args)
	{
		var context = new AnnotationConfigApplicationContext(
			ProjectConfig.class);
			
			
		// явное преобразованеи типов не требуетсяю. Spring 
		// ищет в контексте нужный бин. Если такого бина не 
		// существует, то Spring выбрасывает исключение
		Parrot p = context.getBean(Parrot.class);
		System.out.println(p.getName());
		
		String s = context.getBean(String.class);
		System.out.println(s);
		
		Integer n = context.getBean(Integer.class);
		System.out.println(n);
	}
}