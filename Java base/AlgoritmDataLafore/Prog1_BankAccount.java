
/**
* В этой программе демонстрируется применение
* базового синтаксиса ООП
* @version 18.0.2.1 2022-09-19
* @author Vitaliy Yakovlev
*/

/////////////////////////////////////////////////////////////////////
class BankAccount
{
	private double balance;						// баланс счета
	
	public BankAccount(double openingBalance)	// Конструктор
	{
		balance = openingBalance;
	}
	
	public void deposit(double amount)			// Внесение средств
	{
		balance += amount;
	}
	
	public void withdraw(double amount)			// Снятие средств
	{
		balance -= amount;
	}
	
	public void display()						// Вывод баланса
	{
		System.out.println("balance = " + balance);
	}
	}
}
/////////////////////////////////////////////////////////////////////
public class BankApp
{
	public static void main(String[] args)
	{
		BankAccount ba1 = new BankAccount(100.00);	// Создание счета
		
		System.out.println("Before transactions, ");
		ba1.display;								// Вывод баланса
		
		ba1.deposit(74.35);							// Внесение средств
		ba1.withdraw(20.00);						// Снятие средств
		
		System.out.println("After transactions, ");
		ba1.display();								// Вывод баланса
	}
}