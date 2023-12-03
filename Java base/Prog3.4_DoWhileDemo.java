import java.util.*;

/**
* В этой программе демонстрируется применение
* цикла do-while
* @version 18.0.2.1 2022-08-30
* @author Vitaliy Yakovlev
*/

public class Retirement
{
	public static void main(String[] args)
	{
		// Прочитать вводимые данные
		Scanner in = new Scanner(System.in);
		
		System.out.print("How much money will you" 
						+ "contribute every year? ");
		double payment = in.nextDouble();
		
		System.out.print("Interest rate in %: ");
		double interestRate = in.nextDouble();
		
		double balance = 0;
		int years = 0;
		
		String input;
		
		// обновить остаток на счету, пока работник 
		// не готов выйти на пенсию
		do
		{
			// Добавить ежегодный взнос и проценты
			balance += payment;
			double interest = balance * interestRate / 100;
			balance += interest;
			years++;
			
			// вывести текущий остаток на счету 
			System.out.printf("After year %d,
				your balance is %,.2f%n", year, balance);
				
			// запросить готовность работника выйти
			// на пенсию и получить ответ
			System.out.printf("Ready to retire? (Y/N) ");
			input = in.next();
		}
		while(input.equals("N"));
	}
}