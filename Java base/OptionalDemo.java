import java.util.Optional;

/**
* В этой программе демонстрируется применение
* Optional
* @version 17.0 2024-01-09
* @author Vitaliy Yakovlev
*/

public class OptionalDemo
{
	public static void main(String[] args)
	{
		Optional<String> noVal = Optional.empty();
		Optional<String> hasVal = Optional.of("ABCDEFG");

		if(noVal.isPresent())
			System.out.println("Это не отобразится");
		else
			System.out.println("noVal не имеет значения");
		
		if(hasVal.isPresent())
			System.out.println("Строка в hasVal: " + hasVal.get());

		String defStr = noVal.orElse("Стандартная строка");
		System.out.println(defStr);

		String otherString = hasVal.orElse("Стандартная строка");
		System.out.println(otherString);
	}
}