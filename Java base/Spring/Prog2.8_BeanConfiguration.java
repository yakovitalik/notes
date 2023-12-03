
/**
* Класс по добавлению бина в контекст Spring
* 
* @version 18.0.2.1 2022-10-04
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
}