
/**
* Добавление в контекст еще двух бинов
* 
* @version 18 2022-10-04
* @author Vitaliy Yakovlev
* @author yakovitalik@mail.ru
*/
@Configuration
public class ProjectConfig
{
	@Bean
	Parrot parrot()
	{
		var p = new Parrot();
		p.setName("Koko");
		return p;
	}
	
	// Добавление в контекст Spring строки "Hello"
	@Bean
	String hello()
	{
		return "Hello";
	}
	
	// Добавление в контекст Spring целого числа 10
	@Bean
	Integer ten()
	{
		return 10;
	}
}