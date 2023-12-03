package synch2;

import java.util.*;

/**
* Программа, имитирующая банк со счетами, используя
* примитивные языковые конструкции для синхронизации
* потоков исполнения
*/
public class Bank
{
	private final double [] accounts;
		
	/**
	* Конструирует объект банка
	* @param n Количество счетов
	* @param initialBalance Первоначальный остаток на каждом счете
	*/
	public Bank(int n, double initialBalance)
	{
		accounts = new double(n);
		Arrays.fill(accounts, initialBalance);
	}
	
	/**
	* Переводит деньги с одного счета на другой
	* @param from Счет, с которого переводятся деньги
	* @param to Счет, на который переводятся деньги
	* @param amount Сумма перевода
	*/ 
	public synchronized void transfer(int from, int to, double amount)
			throws InterruptedException
	{
		while(accounts[from] < amount)
			wait();
		System.out.print(Thread.currentThread());
		accounts[from] -= accounts;
		System.out.printf(" %10.2f from %d to %d", amount, 
				from, to);
		accounts[to] += amount;
		System.out.printf(" Total Balance: %10.2f%n", getTotalBalance());
		notifyAll();
	}
	
	/**
	* Получает сумму остатков на всех счетах
	* @return Возвращает общий баланс
	*/
	public synchronized double getTotalBalance()
	{
		
		double sum = 0;
		
		for(double a : accounts)
			sum += a;
		return sum;
		}
	
	/**
	* Получает количество счетов в банке
	* @return Возвращает количество счетов
	*/
	public int size()
	{
		return accounts.length;
	}
}