// Применение метода Substring()

using System;

namespace Program61
{
	class SubStr
	{
		static void Main()
		{
			string orgstr = "В C# упрощается обращение со строками.";
			
			// сформировать подстроку
			string substr = orgstr.Substring(5, 20);
			
			Console.WriteLine("orgstr: " + orgstr);
			Console.WriteLine("substr: " + substr);
			
			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}