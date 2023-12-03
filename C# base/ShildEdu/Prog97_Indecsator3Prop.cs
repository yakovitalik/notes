// Использование индексатора для создания отказоустойчивого массива2
// Добавляем свойство Length в класс FailSofrArray

using System;

namespace Program97
{
	class FailSoftArray
	{
		int[] a;				// ссылка на базовый массив
		int len;				// длинна массива - служит основанием для свойства Length
		
		public bool ErrFlag;	// обозначает результат последней операции

		// построить массив заданного размера
		public FailSoftArray(int size)
		{
			a = new int[size];
			len = size;
		}

		// Свойство Length только для чтения 
		public int Length
		{
			get 
			{
				return len;
			}
		}

		// Это индексатор для класса FailSoftArray
		public int this[int index]
		{
			// Это аксессор get
			get 
			{
				if(ok(index))
				{
					ErrFlag = false;
					return a[index];
				}
				else
				{
					ErrFlag = true;
					return 0;
				}
			}

			// это аксессор set
			set
			{
				if(ok(index))
				{
					a[index] = value;
					ErrFlag = false;
				}
				else ErrFlag = true;
			}
		}

		// Возвратить логическое значение true, если 
		// индекс находится в установленных границах
		private bool ok(int index)
		{
			if(index >= 0 & index < Length) return true;
			return false;
		}
	
	}

	// Продемонстрировать применение отказоустойчивого массива

	class ImprovedFSDemo
	{
		static void Main()
		{
			FailSoftArray fs = new FailSoftArray(5);
			int x;

			// Разрешить чтение свойства Length
			for (int i = 0; i < fs.Length; i++)
				fs[i] = i * 10;

			for(int i = 0; i < fs.Length; i++)
			{
				x = fs[i];
				if(x != -1) Console.Write(x + " ");
			}

			Console.WriteLine();

			// fs.Length = 10; // Ошибка, запись запрещена

			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}