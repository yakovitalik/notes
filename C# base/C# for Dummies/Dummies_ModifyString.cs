// ModifyString - мктоды класса String не модифицируют сам
// объект (s/ToUpper() не изменяет строку s; вместо этого он 
// возвращает новую преобразованную строку)

using System;

namespace ModifyString
{
	class Program
	{
		public static void Main(string[] args)
		{
			// Создание объекта Student
			Student s1 = new Student();
			s1.Name = "Jenny";

			// Создаем новый объект с тем же именем
			Student s2 = new Student();
			s2.Name = s1.Name;

			// Изменение имени объекта s1 не изменяет сам
			// объект, посколку ToUpper() возвращает новую
			// строку, не вляияя на оригинал
			s2.Name = s1.Name.ToUpper();
			Console.WriteLine("s1 - " + s1.Name + ", s2 - " + s2.Name);

			// Подтверждние пользователя для выхода
			Console.WriteLine("Нажмите <Enter> для завершения программы...");
			Console.Read();
		}
	}
	// Student - простейший класс, содержащий строку
	class Student
	{
		public String Name;
	}
}