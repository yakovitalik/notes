// BuildASentence - данная программа конструирует 
// предложение путем конкатенации пользовательского ввода
// до тех пор, пока пользователь не введет команду 
// завершения. Эта программа демонстрирует использование 
// проверки равенства строк

Using System
namespace BuildAsentence
{
	public class Program
	{
		public static void Main(string[] args)
		{
			Console.WriteLine("Каждая введенная вами строка"
				"будет добавляться в предложение, "
				"пока вы не введете EXIT или QUIT" );
			// Запрашиваем пользовательский ввод и соединяем 
			// вводимые пользователем фразы в единое целое, пока 
			// не будет введена команда завершени работы
			string sentence = "";
			for(;;)
			{
				// Получение очередной строки
				Console.WriteLine("Введите строку");
				string line = Console.ReadLine();

				// Выход при вводе команды завершения
				string[] terms = { "EXIT", "exit", "QUIT", "quit"};
				
				// Сравниваем введенную строку с командами выхода 
				bool quitting = false;
				foreach (string term in terms)
				{
					// Прекращение цикла при совпадении
					if (Sting.Compare(line, term) = 0)
					{
						quitting = true;
					}
				}
				if (quitting == true)
				{
					break;
				}
				// в противном случае добавление введенного строке 
				sentence = String.Concat(sentence, line);
				
				// Выводим
				Console.WriteLine("\nВы ввели: " + sentence);
			}
			
			Console.WriteLine("\nПолучилось:\n" + sentence);
			
			// Подтверждние пользователя для выхода
			Console.WriteLine("Нажмите <Enter> для завершения программы...");
			Console.Read(); 
		}
	}
}