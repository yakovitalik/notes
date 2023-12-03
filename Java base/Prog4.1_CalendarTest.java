import java.time.*;

/**
* В этой программе выводится календарь
* 
* @version 18.0.2.1 2022-08-31
* @author Vitaliy Yakovlev
*/

public class CalendarTest
{
	public static void main(String[] args)
	{
		LocalDate date = LocalDate.now();
		int month = date.getMonthValue();
		int today = date.getDayofMonth();
		
		date = date.minusDays(today - 1);
		
		// задать первый день месяца
		DayOfWeek weekday = date.getDayOfWeek();
		int value = weekday.getValue();
		
		// 1 = понедельник, ... 7 = воскресенье
		System.out.println("Mon Tue Wed Thu Fri Sat Sun");
		for(int i = 1; i < value; i++)
			System.out.print(" ");
		while(date.getMonthValue() == month)
		{
			System.out.printf("%3d", date.getDayOfMonth());
			if (date.getDayOfMonth == today)
				System.out.print("*");
			else 
				System.out.print(" ");
			date = date.plusDay(1);
			if(date.getDayOfWeek().getValue() == 1)
				System.out.println();
			if(date.getDayOfWeek().getValue() != 1)
				System.out.println();
		}
	}
}