
/**
* Добавление в контекст нескольких бинов
* одного типа
* @version 18 2022-10-04
* @author Vitaliy Yakovlev
* @author yakovitalik@mail.ru
*/
@Configuration
public class ProjectConfig
{
	@Bean
	Parrot parrot1()
	{
		var p = new Parrot();
		p.setName("Koko");
		return p;
	}
	
	@Bean
	Parrot parrot2()
	{
		var p = new Parrot();
		p.setName("Miki");
		return p;
	}
	
	@Bean
	Parrot parrot3()
	{
		var p = new Parrot();
		p.setName("Riki");
		return p;
	}
}