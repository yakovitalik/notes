// Структуры удобны для группирования небольших объемов данных

using System;

namespace Program114
{
	// Определить структуру пакета
	struct PacketHeader
	{
		public uint PackNum;			// номер пакета
		public ushort PackLen;			// длинна пакета
	}

	// Использовать структуру PacketHeader для создания транзакции 
	// в сфере электронной коммерции.
	class Transaction
	{
		static uint transacNum = 0;
		PacketHeader ph;				// ввести структуру PacketHeader в класс Transaction
		string accountNum;
		double amount;

		public Transaction(string acc, double val)
		{
			// создать заголовок пакета
			ph.PackNum = transacNum++;
			ph.PackLen = 512;				// произвольная длинна

			accountNum = acc;
			amount = val;
		}

		// Сымитировать транзакцию.
		public void sendTransaction()
		{
			Console.WriteLine("Пакет №: " + ph.PackNum + 
								"Длинна: " + ph.PackLen + 
								", \n Счет №: " + accountNum + 
								", Сумма: {0:C}\n", amount);
		}
	}

	// Продемонстрировать применение структуры в виде пакета транзакий
	class PacketDemo
	{
		static void Main()
		{
			Transaction t = new Transaction("31243", -100.12);
			Transaction t2 = new Transaction("AB4655", 345.25);
			Transaction t3 = new Transaction("8475-09", 9800.00);

			t.sendTransaction();
			t2.sendTransaction();
			t3.sendTransaction();
			
			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}