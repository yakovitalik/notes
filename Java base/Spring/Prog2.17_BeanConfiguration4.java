
/*
* Использование аннотации @ComponentScan, чтобы сообщить Spring, 
* где находятся классы со стереотипными аннотациями
* Используя в аннотации атрибут basePackages, 
* мы указываем Spring, где находятся классы
* со стереотипными аннотациями
*/
@Configuration
@ComponentScan(basePackages = "main")
public class ProjectConfig {
	
	}