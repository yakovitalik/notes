
/**
* В этой создается экземпляр контекста Spring
* 
* @version 18 2022-10-04
* @author Vitaliy Yakovlev
*/

public class Main
{
	public static void main(String[] args)
	{
		// создание экземпляра контекста Spring
		var context = new AnnotationConfigApplicationContext();
		
		Parrot p = new Parrot();
	}
}